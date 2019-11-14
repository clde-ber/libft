#include <string.h>

void    *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;

    i = 0;
    while (i < n)
    {
        if (((char *)s)[i] == c)
            return (&s[i]);
        i++;
    }
    return (0);
}

int     main(int ac, char av)
{
    printf("%s", (char *)ft_memchr((char *)"HeLLO", 'e', 4));
    return (0);
}
