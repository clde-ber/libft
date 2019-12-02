#include <stdlib.h>
#include <stdio.h>

static void ft_swap(char *a, char *b)
{
	char *tmp;

	a = tmp;
	b = a;
	tmp = b;
}

static int ft_strlen_int(int n)
{
	int i;

	i = 0;
	if (n <= 2147483647 && n >= -2147483648)
	{
		if (n < 0)
			n = -n;
		while (n > 0)
		{
			n = n / 10;
			i++;
		}
	}
	return (i + 1);
}

char *ft_itoa(int n)
{
	int i;
	int j;
	int k;
	char *str;
	char *revstr;

	i = 0;
	j = 0;
	k = n;
	str = malloc(sizeof(char) * ft_strlen_int(n) + 1);
	revstr = malloc(sizeof(str));
	if (n <= 2147483647 && n >= -2147483648)
	{
		if (n < 0)
			n = -n;
		while (j++ <= ft_strlen_int(n) + 1)
		{
			str[i++] = (n % 10) + '0';
			n = n / 10;
			printf("%c", 'a');
		}
		printf("\n valeur de str au debut %s", str);
		j = ft_strlen_int(k) - 2;
		i = 0;
		while (i < ft_strlen_int(k) / 2)
		{
			revstr[i++] = str[j--];
		}
		printf("\n valeur de i %d", i);
		printf("\n valeur de j %d", j);
		printf("\n valeur de str %s", str);
		while (i < ft_strlen_int(k))
			revstr[i++] = str[j--];
		printf("\n\n\n valeur de i a la fin %d", i);
		revstr[i - 1] = '\0';


	}
	return (revstr);
}

int	main(void)
{
	printf("          \n%s", ft_itoa(1872));
	return (0);
}
