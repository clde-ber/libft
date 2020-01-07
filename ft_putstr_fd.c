void	ft_putstr_fd(char *s, int fd)
{
	size_t i;

	i = 0;
	if (s != NULL)
		write(1, s, ft_strlen(s));
}
