char		*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	i = start;
	j = 0;
	if (len >= ft_strlen(s + start))
	{
		len = ft_strlen(s + start);
		if (!(str = malloc(sizeof(char) * len)))
			return (0);
	}
	else
	{
		if (!(str = malloc(sizeof(char) * len + 1)))
			return (0);
	}
	while (j < len)
		str[j++] = (char)s[i++];
	str[j] = '\0';
	return (str);
}
