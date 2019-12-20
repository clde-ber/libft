#include <string.h>
#include <stdio.h>
#include <stdlib.h>

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

static char		*fill_split(char *str, size_t i, char const *s, char c)
{
	size_t k;

	k = 0;
	while (s[i] == c && s[i])
		i++;
	while (s[i] != c && s[i])
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

char			**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	l;
	char	**split;

	i = 0;
	j = -1;
	l = 0;
	if (!(split = malloc(sizeof(char *) * (count_malloc(s, c)))))
		return (0);
	while (++j < count_malloc(s, c) - 1)
	{
		k = cut_s(i, s, c);
		if (!(split[j] = malloc(sizeof(char) * k + 1)))
			return (0);
		while (s[i++])
			if (s[i - 1] != c && (s[i] == c || s[i] == '\0'))
				break ;
//		i = (s[i]) ? i + 1 : i;
		split[j] = fill_split(split[j], l, s, c);
		l = i;
	}
	split[j] = 0;
	return (split);
}

int main()
{
	int i;
	char const *s = "M-A-K-E-L-I-B-F-T-G-R-E-A-T-A-G-A-I-N-!-";
	char c = '-';

	i = 0;
	while (i < 22)
	{
		printf("%s\n", ft_split(s, c)[i]);
		i++;
	}
	return (0);
}
