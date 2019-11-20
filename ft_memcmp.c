#include <string.h>
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;

	i = 0;
	while ((((char *)s1)[i] || ((char *)s2)[i]) && i < n)
	{
		if (((char *)s1)[i] != ((char *)s2)[i])
			break ;
		i++;
	}
	return (((char *)s1)[i] - ((char *)s2)[i]);
}

int	main(void)
{
	printf("%d", ft_memcmp((char *)"Hello", (char *)"Helloa", 3));
	return (0);
}
