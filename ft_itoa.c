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
		{
			n = -n;
			i+=1;
		}
		while (n > 0)
		{
			n = n / 10;
			i++;
		}
	}
	printf("\n valeur de ft_strlen_int %d", (i));
	return (i);
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
	if (!(str = malloc(sizeof(char) * ft_strlen_int(n) + 1)))
			return (0);
	revstr = malloc(sizeof(str));
	if (n <= 2147483647 && n >= -2147483648)
	{
		if (n == -2147483648)
		{
			revstr = "-2147483648";
			return (revstr);
		}
		else if (n < 0)
			n = -n;
		while (j++ < ft_strlen_int(k))
		{
			str[i++] = n % 10 + '0';
			n = n / 10;
			printf("\n%c", 'a');
		}
		printf("\n valeur de str au debut %s", str);
		j = ft_strlen_int(k) - 1;
		i = 0;
		while (i < ft_strlen_int(k) / 2)
			revstr[i++] = str[j--];
		printf("\n valeur de i %d", i);
		printf("\n valeur de j %d", j);
		printf("\n valeur de str %s", str);
		printf("\n valeur de rev str %s", revstr);
		while (i < ft_strlen_int(k))
			revstr[i++] = str[j--];
		printf("\n valeur de rev str %s", revstr);
		printf("\n\n\n valeur de i a la fin %d", i);
		revstr[i] = '\0';
	}
//	if (n <= 2147483647 && n >= -2147483648 && k < 0)
//	{
//		i = 1;
//		revstr[i - 1] = '-';
//		while (i++ < ft_strlen_int(k))
//			revstr[i] = revstr[i + 1];
//	}
	return (revstr);
}

int	main(void)
{
	printf("          \n%s", ft_itoa(2147483647));
	return (0);
}
