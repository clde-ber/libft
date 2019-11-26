#include <string.h>
#include <stdlib.h>
#include <stdio.h>

size_t	ft_strlen(char const *s)
{
	size_t i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

static size_t count_malloc(char const *s, char c)
{
    size_t i;
    size_t count;

    i = 0;
    count = 0;
    while (s[i])
    {
        if (s[i] == c)
                count++;
        if (s[0] == c || s[(ft_strlen(s)) - 1] == c)
            count -= 1;
        if (s[0] == c && s[(ft_strlen(s)) - 1] == c)
            count -= 2;
        i++;
    }
    return (count);
}

size_t  cut_s(size_t i, char const *s, char c)
{
    while (s[i])
    {
        if(s[i] != c)
            i++; 
    }
    return (i);
}

char **ft_split(char const *s, char c)
{
    size_t i;
    size_t j;
    char **split;

    i = 0;
    j = 0;
    split = malloc(sizeof(char *) * (count_malloc(s, c) + 1));
    while (split[i])
    {
        split[i] = (char *)malloc(sizeof(char) * j);
        j += cut_s(j, s, c);
        i++;
    }
    split[i] = 0;
    return (split);
}

int     main(int ac, char **av)
{
    size_t i;

    i = 0;
    while (ft_split(av[1], 'c')[i])
    {
            printf("%s", ft_split(av[1], 'c')[1]);
            i++;
    }
}
