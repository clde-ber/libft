#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, sizeof(char));
}

void	ft_putstr_fd(char *s, int fd)
{
	size_t i;

	i = 0;
	while (s[i])
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}

void	ft_putendl_fd(char *s, int fd)
{
	const char *buf;

	buf = "\n";
	ft_putstr_fd(s, fd);
	write(fd, buf, sizeof("\n"));
}

int	main(void)
{
	ft_putendl_fd("Hello", 1);
	return (0);
}
