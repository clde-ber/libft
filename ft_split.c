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

void			*ft_free(char **res, int j)
{
	int	i;

	i = 0;
	while (i < j)
	{
		free(res[i]);
		i++;
	}
	free(res);
	return (NULL);
}

char			**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	char	**res;
	size_t	str_nb;

	i = -1;
	j = 0;
	if (!s)
		return (0);
	str_nb = (c == 0) ? 1 : count_malloc(s, c);
	if (!(res = malloc(sizeof(char *) * (str_nb + 1))))
		return (0);
	res[0] = (c == 0) ? ft_strdup(s) : res[0];
    res[str_nb] = ft_strdup("(NULL)");
	while ((i++ + 1) < ft_strlen(s))
        if (s[i] != c && j < str_nb)
		{
            if (!(res[j] = malloc(sizeof(char) * (len_wd(&s[i], c) + 1))))
				return (ft_free(res, j));
			res[j] = ft_memmove(res[j], &s[i], len_wd(&s[i], c) + 1);
			res[j][len_wd(&s[i], c)] = '\0';
			j++;
            i += len_wd(&s[i], c);
		}
	return (res);
}
