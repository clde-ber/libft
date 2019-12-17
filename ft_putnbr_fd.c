void	ft_putnbr_fd(int n, int fd)
{
	char c;

	if (n == -2147483648)
		write(fd, "-2147483648", 12);
	else if (n < 0)
	{
		n = -n;
		write(fd, "-", 1);
	}
	if (n >= 0 && n <= 9)
	{
		c = n + '0';
		write(fd, &c, 1);
	}
	if (n > 9)
	{
		if (n > 0)
			ft_putnbr_fd((n / 10), fd);
		ft_putnbr_fd((n % 10), fd);
	}
}
