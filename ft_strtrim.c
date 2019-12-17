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
	size_t	j;
	char	*str;

	i = 0;
	j = 0;
	if (s1 == NULL || set == NULL)
		return (0);
	if (ft_strlen(s1) == 0 && s1[0] == '\0')
	{
		if (!(str = malloc(sizeof(char))))
			return (0);
		str[0] = s1[0];
		return (str);
	}
	while (i < ft_strlen(s1))
	{
		if (is_in_set(s1[i], set) == 0)
			j++;
		i++;
	}
	if (!(str = malloc(sizeof(char) * (j + 1))))
		return (0);
	str[j] = '\0';
	while (--i > 0)
		if (is_in_set(s1[i], set) == 0)
			str[--j] = (char)s1[i];
	return (str);
}
