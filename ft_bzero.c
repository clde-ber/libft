#include <string.h>
#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		((char *)s)[i] = '\0';
		i++;
	}
	printf("%s", s);
}

int	main(int ac, char **av)
{
	(void)ac;
	ft_bzero(av[1], 4);
	return (0);
}
