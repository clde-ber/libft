char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*ptr;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (ft_strdup(""));
	if (!(ptr = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1))))
		return (0);
	while (s1[i])
	{
		ptr[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		ptr[i + j] = s2[j];
		j++;
	}
	ptr[i + j] = '\0';
	return (ptr);
}
