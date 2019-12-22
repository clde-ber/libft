static size_t	len_wd(char const *str, int c)
{
	size_t i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			break ;
		i++;
	}
	return (i);
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
	char	**res;
	size_t	str_nb;

	i = -1;
	j = 0;
	if (!s || !c)
		return (0);
	str_nb = count_malloc(s, c);
	if (!(res = malloc(sizeof(char *) * (str_nb + 1))))
		return (0);
	while (s[i++ + 1])
		if (s[i] != c && j < str_nb)
		{
			if (!(res[j] = malloc(sizeof(char) * (len_wd(&s[i], c) + 1))))
				return (0);
			res[j] = ft_memcpy(res[j], &s[i], len_wd(&s[i], c) + 1);
			res[j][len_wd(&s[i], c)] = '\0';
			j++;
			i += len_wd(&s[i], c);
		}
	res[str_nb] = 0;
	return (res);
}
