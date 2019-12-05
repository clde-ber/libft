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

static int	ft_fill_w_a(unsigned char b, char c)
{
		return ((unsigned char)b);
}

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t i;
	char *str;

	i = 0;
	if (!(str = malloc(sizeof(s))))
		return (0);
	while (i < ft_strlen(s))
	{
		str[i] = (*f)((unsigned char)str), s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

int main (int ac, char **av)
{
	void(ac);
	size_t i;

	ft_strmapi((char const)av[1], ft_fill_w_a((unsigned int)av[2], (int)av[1]);
	return (0);
}
