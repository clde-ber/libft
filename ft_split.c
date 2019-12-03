#include <string.h>
#include <stdlib.h>
#include <stdio.h>

static size_t	ft_strlen(char const *s)
{
	size_t i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

static size_t	count_malloc(char const *s, char c)
{
	size_t i;
	size_t count;

	i = 0;
	count = 1;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i] == '\0'))
			count++;
		i++;
	}
	return (count);
}

static size_t	cut_s(size_t i, char const *s, char c)
{
	size_t	count;

	count = 0;
	while (s[i] == c && s[i])
		i++;
	while (s[i] != c && s[i])
	{
		count++;
		i++;
	}
	return (count);
}

static char	*fill_split(char *str, size_t i, char const *s, char c)
{
	size_t k;

	k = 0;
	while (s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] != c)
		{
			str[k] = s[i];
			k++;
		}
		i++;
	}
	str[k] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	size_t	v[4];
	char	**split;

	v[0] = 0;
	v[1] = 0;
	v[2] = cut_s(v[0], s, c);
	v[3] = 0;
	if (!(split = malloc(sizeof(char *) * (count_malloc(s, c) + 1))))
		return (0);
	while (v[1] < count_malloc(s, c) - 1)
	{
		if (!(split[v[1]] = malloc(sizeof(char) * v[2] + 1)))
			return (0);
		while (s[v[0]++])
			if (s[v[0]] != c && (s[v[0] + 1] == c || s[v[0] + 1] == '\0'))
				break ;
		v[0] += 1;
		if (v[0] < ft_strlen(s))
			v[2] = cut_s(v[0], s, c);
		split[v[1]] = fill_split(split[v[1]], v[3], s, c);
		v[3] = v[0];
		v[1]++;
	}
	split[v[1]] = 0;
	return (split);
}

int	main(int ac, char **av)
{
	size_t i;

	(void)ac;
	i = 0;
	while (i < count_malloc(av[1], 'c'))
	{
		printf("Valeur de retour du main - %s\n", ft_split(av[1], 'c')[i]);
		i++;
	}
	free(ft_split(av[1], 'c'));
	return (0);
}
