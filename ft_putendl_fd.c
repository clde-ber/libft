void	ft_putendl_fd(char *s, int fd)
{
	const char *buf;

	buf = "\n";
	ft_putstr_fd(s, fd);
	write(fd, buf, sizeof("\n"));
}
