#include <stdlib.h>
#include <stdio.h>

static int	len_int(int n)
{
	int i;

	i = 0;
	if (n == -2147483648)
		return (11);
	else if (n <= 2147483647 && n > -2147483648)
	{
		if (n < 0)
		{
			n = -n;
			i += 1;
		}
		while (n > 0)
		{
			n = n / 10;
			i++;
		}
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int	i;
	int	j;
	int	k;
	char	*str;
	char	*revstr;

	i = 0;
	j = 0;
	k = n;
	if (!(str = malloc(sizeof(char) * len_int(n) + 1)) || !(revstr = malloc(sizeof(str))))
		return (0);
	n = (n < 0 && k != -2147483648) ? -n : n;
	while (j++ < len_int(k) && k != -2147483648)
	{
		str[i++] = n % 10 + '0';
		n = n / 10;
	}
	printf("taille du mot %d\n", i);
	printf("valeur de len_int(k) soit longueur du mot %d\n\n", len_int(k));
	while ((i - len_int(k) <= len_int(k) / 2) && k != -2147483648)
		revstr[i++ - len_int(k)] = str[--j - 1];
	printf("valeur de i apres la premiere boucle qui inverse %d\n", (i - len_int(k)));
	printf("valeur de j apres la premiere boucle qui inverse %d\n\n", (j -1));
	while ((i - len_int(k) <= len_int(k)) && k != -2147483648)
		revstr[i++ - len_int(k) - 1] = str[--j];
	printf("valeur de i apres la seconde boucle qui poursuit %d\n", (i - len_int(k) - 1));
	printf("valeur de j apres la seconde boucle qui poursuit %d\n\n", (j - 1));
	revstr[0] = (k < 0 && k != -2147483648) ? '-' : revstr[0];
	revstr = (k == -2147483648) ? "-2147483648" : revstr;
	return (revstr);
}

int	main(void)
{
	printf("          \n%s", ft_itoa(-2174));
	return (0);
}