#include <string.h>
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*tmp;

	i = 0;
	tmp = (char *)src;
	while (i < len)
	{
		((char *)dst)[i] = tmp[i];
		i++;
	}
	return (dst);
}

int	main(int ac, char **av)
{
	(void)ac;
	printf("%s", (char *)ft_memmove(av[2], av[1], 5));
	return (0);
}
