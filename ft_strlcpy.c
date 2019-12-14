size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t j;

	i = ft_strlen(src);
	j = ft_strlen(dst);
	if (dstsize > 0)
	{
		dstsize = (dstsize > i) ? i : dstsize - 1;
		dst = (char *)ft_memmove(dst, src, dstsize);
		dst[dstsize] = '\0';
	}
	return (i);
}
