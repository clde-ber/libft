#include <string.h>

size_t      ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
    size_t i;

    i = 0;
    while (src[i])
    {
        if (i == dstsize - 1)
            dst[i] == '\0';
        dst[i] = src[i];
        i++;
    }
    return (i);
}

int         main(int ac, char **av)
{
    printf("%u", ft_strlcpy(av[2], av[1], sizeof(char **)));
    return (0);
}
