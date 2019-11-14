#include <string.h>

int     ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;

    i = 0;
    while(((char *)s1)[i] || ((char *)s2)[i])
    {
        if (((char *)s1)[i] != ((char *)s2)[i])
            break;
        i++;
    }
    return (((char *)s1)[i] - ((char *)s2)[i]);
}

int     main(int ac, char **av)
{
    printf("%d", ft_memcmp((char *)"Hello", (char *)"Helloa", 6));
    return (0);
}
