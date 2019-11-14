#include <string.h>

void    *ft_memset (void *s, int c, size_t n)
{
    size_t i;
    
    i = 0;
    while (i < n)
    {
        ((char *)s)[i] = c + '0';
        i++;
    }
    printf("%s", s);
    return ((void *)s);
}

int     main(int ac, char **av)
{
    ft_memset(av[1], 5, 4);
    return (0);
}
