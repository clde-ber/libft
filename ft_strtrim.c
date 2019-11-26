#include <string.h>
#include <stdlib.h>
#include <stdio.h>

static size_t		ft_strlen(char const *s)
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

char		*ft_strtrim(char const *s1, char const *set)
{
	size_t i;
	char *str;
	
	i = 0;
	str = malloc(sizeof(char) * (ft_strlen(s1)));
	if ((is_in_set(s1[0], set) && is_in_set(s1[ft_strlen(s1) - 1], set)))
		{
			while (i++ < ft_strlen(s1) - 2)
				str[i] = s1[i + 1];
		}
	else if (is_in_set(s1[0], set)) 
		{
			i = 0;
			while (i++ < ft_strlen(s1) - 1)
				str[i] = s1[i + 1];
		}
	else if (is_in_set(s1[ft_strlen(s1) - 1], set))
		{	
			i = 0;
			while (i++ < ft_strlen(s1) - 1)
				str[i] = s1[i];
		}
	i = 0;
	while (i++ < ft_strlen(s1))
		str[i] = s1[i];
	return (str);
}

int main (int ac, char **av)
{
	(void)ac;
	printf("%s", ft_strtrim(av[1], av[2]));
	return (0);
}
