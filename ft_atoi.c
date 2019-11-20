#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(const char *str)
{
	int i;
	int j;
	int res;

	i = 0;
	j = 1;
	res = 0;
	if (str[i] == '-')
		j = -j;
	i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res + (str[i] - '0');
		res = res * 10;
		i++;
	}
	return ((res * j) / 10);
}

int	main(int ac, char **av)
{
	(void)ac;
	printf("%d", ft_atoi(av[1]));
	return (0);
}
