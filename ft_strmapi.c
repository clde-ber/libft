char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	size;
	char	*str;

	i = 0;
	size = ft_strlen(s);
	if (size == 0)
	{
		if (!(str = malloc(sizeof(char))))
			return (0);
	}
	else
	{
		if (!(str = malloc(ft_strlen(s) + 1)))
			return (0);
		while (i < size)
		{
			str[i] = (*f)(ft_strlen(s), (char)s[i]);
			i++;
		}
	}
	str[i] = '\0';
	return (str);
}
