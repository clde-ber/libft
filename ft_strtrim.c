static size_t	is_in_set(char const c, char const *set)
{
	size_t i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	rm_len;
	size_t	len;

	i = 0;
	rm_len = 0;
	if (!s1 || !set)
		return (0);
	len = ft_strlen(s1) - 1;
	if (s1 == set)
		ft_strdup(s1);
	else
	{
		while (s1[i] && is_in_set(s1[i], set))
			i++;
		while (len > 0 && s1[len] && is_in_set(s1[len], set))
		{
			rm_len++;
			len--;
		}
	}
	return (ft_substr(s1, i, ft_strlen(s1 + i) - rm_len));
}
