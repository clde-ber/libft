#include <string.h>
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		if (((char *)s)[i] == c)
			return ((void *)&s[i]);
		i++;
	}
	return (0);
}

int	main(void)
{
	printf("%s", (char *)ft_memchr((char *)"HeLLO", 'e', 4));
	return (0);
}
