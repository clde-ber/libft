#include <stdio.h>

int	ft_isprint(int c)
{
	if (c >= 40 && c <= 176)
		return (1);
	return (0);
}

int	main(void)
{
	printf("%d", ft_isprint('5'));
	return (0);
}
