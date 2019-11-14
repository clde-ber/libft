#include <string.h>

size_t      ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t i;
    size_t j;

    i = 0;
    j = 0;
    while (dst[i])
    {
        i++;
        if (i == size)
            return(size);
    }
    dst[i] = '\0';
    while (src[j])
    {
        dst[i] = src[j];
        i++;
        j++;
    }
    dst[i] = '\0';
    return (i);
}

int     main(int ac, char **av)
{
    printf("%d", ft_strlcat(av[2], av[1], 4));
    return (0);
}
