#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	return (0);
}

int	main(int ac, char **av)
{
	(void)ac;
	printf("%s", ft_strchr(av[1], av[2][0]));
	return (0);
}
