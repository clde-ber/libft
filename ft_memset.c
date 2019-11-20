#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t i;

	i = 0;
	while (i < len)
	{
		((char *)b)[i] = c + '0';
		i++;
	}
	return ((void *)b);
}

int	main(int ac, char **av)
{
	(void)ac;
	ft_memset(av[1], 5, 4);
	return (0);
}
