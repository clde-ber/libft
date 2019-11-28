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
	size_t j;
	size_t count;

	i = 0;
	count = 1;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

size_t  cut_s(size_t i, char const *s, char c)
{
	size_t	count;

	count = 0;
	while (s[i] == c)
		i++;
	while (s[i] != c)
	{
		count++;
		i++;
	}
	return (count);
}

char *fill_split(char *split, char const *s)
{
	size_t i;
	size_t k;
	char *str;

	while (split[i][k])
	{

	}
	return (str);
}

char **ft_split(char const *s, char c)
{
	size_t i;
	size_t j;
	size_t k;
	char **split;

	i = 0;
	j = 0;
	k = cut_s(i, s, c);
	if (!(split = malloc(sizeof(char *) * (count_malloc(s, c)))))
		return (0);
	split[count_malloc(s, c)] = 0;
	while (split[j])
	{
		if (!(split[j] = malloc(sizeof(char) * k)))
			return (0);
		k = cut_s(k, s, c);
		split = fill_split(i, split[j], s);

	}
	return (split);
}

int     main(int ac, char **av)
{
	printf("%li", count_malloc("cchellocctoiccsalut", 'c'));
	printf("%li", cut_s(0, "cchellocctoiccsalut", 'c'));
	return (0);
}
