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

static void		*find_malloc(char const *s1, char const *set)
{
	void *ptr;

	if (is_in_set(s1[0], set) && is_in_set(s1[ft_strlen(&s1[0]) - 1], set))
	{
		if (!(ptr = malloc(sizeof(char const) * (ft_strlen(s1) - 1))))
			return (0);
		return (ptr);
	}
	else if (is_in_set(s1[0], set) && is_in_set(s1[ft_strlen(&s1[0]) - 1], set) == 0)
	{
		if (!(ptr = malloc(sizeof(char const) * (ft_strlen(s1) + 1))))
			return (0);
		return (ptr);
	}
	else if (is_in_set(s1[0], set) || is_in_set(s1[ft_strlen(&s1[0]) - 1], set))
	{
		if (!(ptr = malloc(sizeof(char const) * (ft_strlen(s1)))))
			return (0);
		return (ptr);
	}
	else
	{
		if (!(ptr = malloc(sizeof(char const) * (ft_strlen(s1) + 1))))
			return (0);
		return (ptr);
	}
}

char		*ft_strtrim(char const *s1, char const *set)
{
	size_t i;

	i = 0;
	char *str;

	str = (char *)find_malloc(s1, set);
	while (s1[i])
	{
		if (is_in_set(s1[0], set) && (i < (ft_strlen(s1))))
		//	str[0] = s1[1];
		else
		//	str[0] = s1[i];
		if (is_in_set(s1[ft_strlen(s1) - 1], set))
		//	str[ft_strlen(s1) - 1] = '\0';
		else
		//	str[ft_strlen(s1) - 1] = s1[ft_strlen(s1) - 1];
		else
			str[i] = s1[i];
		i++;
	}
	return (str);
}

int main (int ac, char **av)
{
	//printf("%lu", sizeof(char const));
	printf("%s", ft_strtrim(av[1], av[2]));
	return (0);
}
