#include <string.h>
#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	if (needle[i] == 0)
		return ((char *)&haystack[i]);
	else
	{
		while (haystack[i + j] && i < len)
		{
			if (haystack[i + j] == needle[j])
			{
				if (needle[j] == '\0')
					return ((char *)&haystack[i + j]);
				j++;
			}
			i++;
			j = 0;
		}
	}
	return (0);
}

int	main(int ac, char **av)
{
	(void)ac;
	printf("%s", ft_strnstr(av[1], av[2], 5));
	return (0);
}
