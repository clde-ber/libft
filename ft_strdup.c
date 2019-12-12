char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*ptr;

	i = 0;
	if (!(ptr = (char *)malloc(sizeof(s))))
		return (0);
	while (s[i])
	{
		ptr[i] = s[i];
		i++;
	}
	return (ptr);
}
