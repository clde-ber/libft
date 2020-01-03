char		*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	j;
	char	*str;

	j = 0;
	if (!s)
		return (ft_strdup(""));
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len >= ft_strlen(s + start))
		len = ft_strlen(s + start);
	if (!(str = malloc(sizeof(char) * (len + 1))))
		return (0);
	while (j < len && s[start])
		str[j++] = (char)s[start++];
	str[j] = '\0';
	return (str);
}
