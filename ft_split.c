#include <string.h>
#include <stdlib.h>
#include <stdio.h>

size_t	ft_strlen(char const *s)
{
	size_t i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

static size_t count_malloc(char const *s, char c)
{
	size_t i;
	size_t count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == c)
			count++;
		if ((s[i] == c && i == 0) || s[(ft_strlen(s)) - 1] == c)
			count -= 1;
		if ((s[i] == c && i == 0) && s[(ft_strlen(s)) - 1] == c)
			count -= 2;
		i++;
	}
	return (count + 1);
}

size_t  cut_s(size_t i, char const *s, char c)
{
	size_t	count;

	while (s[i])
	{
		if (s[i] != c)
			count++;
		i++;
	}
	return (count);
}

char **ft_split(char const *s, char c)
{
	size_t i;
	size_t j;
	size_t k;
	char **split;

	i = 0;
	j = 0;
	if (!(split = malloc(sizeof(char *) * (count_malloc(s, c) + 1))))
		return (0);
	while (s1[i])
	{
		if (!(split[i] = malloc(sizeof(char) * k)))
			return (0);
		k = cut_s(k, s, c);
		i++;
		printf("%li", j);
	}
	split[i] = 0;
	return (split);
}

int     main(int ac, char **av)
{
	printf("%s", ft_split(av[1], 'c')[1]);
//	size_t i;

//	i = 1;
//	while ((ft_split(av[1], 'c'))[i])
//	{
//		printf("%s", (ft_split(av[1], 'c'))[i]);
//		i++;
//	}
	return (0);
}
