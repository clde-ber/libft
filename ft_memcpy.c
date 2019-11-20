#include <string.h>
#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		((char *)dst)[i] = ((char *)src)[i];
		i++;
	}
	printf("%s", dst);
	return ((void *)dst);
}

int	main(int ac, char **av)
{
	(void)ac;
	ft_memcpy(av[2], av[1], 4);
	return (0);
}
