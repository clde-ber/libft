char		*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*ptr;

	i = 0;
	j = 0;
	ptr = NULL;
	if (!(ptr = (char*)malloc(ft_strlen(s - start) + 1)))
		return (0);
	while (i < len)
	{
		if (i >= start)
		{
			ptr[j] = s[i];
			j++;
		}
		i++;
	}
	return (ptr);
}
