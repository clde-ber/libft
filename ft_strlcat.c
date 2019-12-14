size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t len_dst;
	size_t len_src;

	if (dst != NULL && src != NULL)
	{
		i = 0;
		len_dst = ft_strlen((const char *)dst);
		len_src = ft_strlen(src);
		if (dstsize < len_dst)
			return (len_src + dstsize);
		while (src[i] && len_dst + i < dstsize - 1)
		{
			dst[len_dst + i] = src[i];
			i++;
		}
		dst[len_dst + i] = '\0';
		return (len_dst + len_src);
	}
	return (0);
}
