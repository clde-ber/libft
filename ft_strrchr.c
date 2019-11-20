#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (0);
}

int	main(int ac, char **av)
{
	(void)ac;
	printf("%s", ft_strrchr(av[1], av[2][0]));
	return (0);
}
