int	ft_atoi(const char *str)
{
	int i;
	int j;
	int res;

	i = 0;
	j = 0;
	res = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			j = (str[i] == '-') ? -1 : 1;
		i++;
	}
	while (ft_isdigit(str[i]) && (res >= 0))
		res = res * 10 + (str[i++] - 48);
	if (res <= 0 && res != -2147483648)
		res = 0;
	else if (j < 0)
		res = res * j;
	return (res);
}
