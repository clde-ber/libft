#include <string.h>

void    *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
    size_t i;

    i = 0;
    while ((i < n) && (((char *)dest)[i] != c))
    {
        ((char *)dest)[i] = ((char *)src)[i];
        i++;
    }
    return ((void *)dest);
}

int     main(int ac, char **av)
{
    printf("%s", (char *)ft_memccpy(av[2], av[1], 'e', 4));
    return (0);
}
