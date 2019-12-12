int	ft_isprint(int c)
{
	if (c >= '\040' && c <= '\176')
		return (1);
	return (0);
}
