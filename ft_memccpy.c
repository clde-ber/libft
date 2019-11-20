#include <string.h>
#include <stdio.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t i;

	i = 0;
	while ((i < n) && (((char *)dst)[i] != c))
	{
		((char *)dst)[i] = ((char *)src)[i];
		i++;
	}
	return ((void *)dst);
}

int	main(int ac, char **av)
{
	(void)ac;
	printf("%s", (char *)ft_memccpy(av[2], av[1], 'e', 4));
	return (0);
}
