#include <string.h>

void       *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t i;
    char *tmp;

    i = 0;
    tmp = (char *)src;
    while (i < n)
    {
        ((char *)dest)[i] = tmp[i];
        i++;
    }
    return (dest);
}

int     main(int ac, char **av)
{
    printf("%s", (char *)ft_memmove(av[2], av[1], 5));
    return (0);
}
