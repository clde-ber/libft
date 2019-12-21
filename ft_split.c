#include <string.h>
#include <stdio.h>
#include <stdlib.h>

static size_t	len_wd(char const *str, int c)
{
	size_t i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			break;
		i++;
	}
	return (i);
}

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t i;

	if (!dst && !src)
		return (NULL);
	i = 0;
	while (i < n)
	{
		((char *)dst)[i] = ((char *)src)[i];
		i++;
	}
	return ((void *)dst);
}

static size_t	count_malloc(char const *s, char c)
{
	size_t i;
	size_t count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

char			**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	char **res;
	size_t str_nb;

	i = 0;
	j = 0;
	str_nb = count_malloc(s,c);
	printf("str_nb %zu\n", str_nb);
	if (!(res = malloc(sizeof(char *) * str_nb)))
		return (0);
	while (s[i] && j < str_nb)
	{
		if (s[i] != c)
		{
			if (!(res[j] = malloc(sizeof(char) * (len_wd(&s[i], c) + 1))))
				return (0);
			res[j] = ft_memcpy(res[j], &s[i], len_wd(&s[i], c) + 1);
			res[j][len_wd(&s[i], c)] = '\0';
			j++;
			i += len_wd(&s[i], c);
		}
		i++;
	}
	res[str_nb] = 0;
	return (res);
}

int main()
{
	int i;
	char const *s = "M-AAAA-K-E----L-I-B-FFFF-T-G-R-E-A-T-A-G-A-I-N---";
	char c = '-';

	i = 0;
	while (i < 21)
	{
		printf("%s\n", ft_split(s, c)[i]);
		i++;
	}
//	printf("%s\n", ft_split(s, c)[19]);

	return (0);
}
