void	ft_putnbr_fd(int n, int fd)
{
	char *number;

	number = ft_itoa(n);
	ft_putstr_fd(number, fd);
}
