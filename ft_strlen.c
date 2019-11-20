#include <string.h>
#include <stdio.h>

size_t	ft_strlen(const char *s)
{
	size_t i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	main(int ac, char **av)
{
	(void)ac;
	printf("%zu", ft_strlen(av[1]));
	return (0);
}
