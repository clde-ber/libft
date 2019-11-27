#include <string.h>
#include <stdlib.h>
#include <stdio.h>

static size_t	ft_strlen(char const *s)
{
	size_t i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

static size_t	is_in_set(char c, char const *set)
{
	size_t i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*str;

	i = 0;
	j = 0;
	str = malloc(sizeof(char) * (ft_strlen(s1)));
	while (i < ft_strlen(s1) && is_in_set(s1[i], set))
		i++;
	while (i < ft_strlen(s1) && is_in_set(s1[i], set) == 0)
	{
		str[j] = s1[i];
		i++;
		j++;
	}
	while (i > 0 && is_in_set(s1[i], set))
	{
		str[j] = '\0';
		i++;
		j++;
	}
	return (str);
}

int	main(int ac, char **av)
{
	char *result;

	(void)ac;
	result = ft_strtrim(av[1], av[2]);
	printf("%s", result);
	return (0);
}
