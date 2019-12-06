#include <unistd.h>
#include <string.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, sizeof(char));
}

void ft_putstr_fd(char *s, int fd)
{
	size_t i;

	i = 0;
	while (s[i])
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}

int	main(void)
{
	int fd;
	char *str;

	fd = 1;
	str = "hello";
	ft_putstr_fd(str, fd);
	return (0);
}
