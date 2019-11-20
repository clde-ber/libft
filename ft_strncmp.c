#include <string.h>
#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if ((s1[i] != s2[i]) || (i == n))
			break ;
		i++;
	}
	return (s1[i] - s2[i]);
}

int	main(int ac, char **av)
{
	(void)ac;
	printf("%d", ft_strncmp(av[1], av[2], 3));
	return (0);
}
