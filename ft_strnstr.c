char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;
	size_t k;

	i = 0;
	j = 0;
	k = 0;
	if (needle[i] == '\0')
		return ((char *)haystack);
	while (haystack[i + k])
	{
		while (needle[j] && j < len)
		{
			if (haystack[i + k] == needle[j])
				k++;
			if (!needle[j])
				return ((char *)&haystack[i + k]);
			j++;
		}
		i++;
		j = 0;
	}
	return (0);
}
