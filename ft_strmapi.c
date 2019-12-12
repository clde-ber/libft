char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*str;

	i = 0;
	if (!(str = malloc(sizeof(s))))
		return (0);
	while (i < ft_strlen(s))
	{
		str[i] = (*f)((unsigned char)str[i], s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
