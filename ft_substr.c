#include <string.h>
#include <stdlib.h>
#include <stdio.h>

static int	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char		*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*ptr;

	i = 0;
	j = 0;
	if (!(ptr = (char*)malloc(ft_strlen((char *)s - start) + 1)))
		return (0);
	while (i < len)
	{
		if (i >= start)
		{
			ptr[j] = s[i];
			j++;
		}
		i++;
	}
	return (ptr);
}

int		main(int ac, char **av)
{
	(void)ac;
	printf("%s", ft_substr(av[1], 3, 19));
	return (0);
}
