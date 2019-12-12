void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*tmp_src;
	unsigned char	*tmp_dst;
	size_t			i;
	size_t			j;

	tmp_src = (unsigned char *)src;
	tmp_dst = (unsigned char *)dst;
	i = 0;
	j = 0;
	if (!len || (dst == src) || !dst || !src)
		return (dst);
	while (i < len && tmp_src[len - i] == tmp_dst[i])
	{
		*tmp_dst++;
		i++;
	}
	while (j++ < len)
	{
		tmp_dst[j] = tmp_src[j];
		j++;
	}
	return (tmp_dst);
}
