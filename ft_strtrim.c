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
	size_t	k;
	size_t	len;
	char	*str;

	i = 0;
	k = 0;
	len = (!s1 || !set) ? 0 : ft_strlen(s1);
	j = len;
	if (!s1 || !set)
		return (0);
	while (i < j && is_in_set(s1[i], set))
		i++;
	while (j >= 0 && is_in_set(s1[--j], set))
		k++;
	if (!(str = (k == i && k != 0 && i != 0) ? malloc(sizeof(char))
				: malloc(sizeof(char) * (len - i - k + 1))))
		return (0);
	j = len - k;
	k = len - i - k;
	str[k] = '\0';
	while (j-- > i)
		str[--k] = (char)s1[j];
	return (str);
}
