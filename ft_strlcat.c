#include <string.h>
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while (dst[i])
	{
		i++;
		if (i == dstsize)
			return (dstsize);
	}
	dst[i] = '\0';
	while (src[j])
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (i);
}

int	main(int ac, char **av)
{
	(void)ac;
	printf("%zu", ft_strlcat(av[2], av[1], 4));
	return (0);
}
