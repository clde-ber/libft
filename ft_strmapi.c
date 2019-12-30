char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	size;
	char			*str;

	if (!s || !f)
		return (0);
	i = 0;
	size = ft_strlen(s);
	if (!(str = malloc(sizeof(char) * (size + 1))))
		return (0);
	while (i < size)
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
