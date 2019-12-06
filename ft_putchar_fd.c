#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, sizeof(char));
}

int	main(void)
{
	int fd;
	char c;

	fd = 1;
	c = 'a';
	ft_putchar_fd(c, fd);
	return (0);
}
