#include <stdio.h>
#include <stdlib.h>
#include <string.h>

size_t	ft_strlen(const char *s)
{
	size_t i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

static char	ft_fill_w_a(unsigned int a, char b)
{
	a = 5;
	b = 'a';
	return (b);
}

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t i;
	char *str;

	i = 0;
	printf("%lu", sizeof(s));
	if (!(str = malloc(sizeof(s))))
		return (0);
	while (i < ft_strlen(s))
	{
		str[i] = (*f)((unsigned char)str[i], s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

int main (int ac, char **av)
{
	(void)ac;

	printf("\n%s\n", ft_strmapi(av[1], ft_fill_w_a));
	return (0);
}
