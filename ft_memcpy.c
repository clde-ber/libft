#include <string.h>

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t i;

    i = 0;
    while (i < n)
    {
        ((char *)dest)[i] = ((char *)src)[i];
        i++;
    }
    printf("%s", dest);
    return ((void *)dest);
}

int     main(int ac, char **av)
{
    ft_memcpy(av[2], av[1], 4);
    return (0);
}