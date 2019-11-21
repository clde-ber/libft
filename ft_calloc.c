#include <stdlib.h>

void    *ft_calloc(size_t nmemb, size_t size)
{
    size_t i;
    void *ptr;

    i = 0;
    if (!(ptr = (void *)malloc(nmemb * size)))
        return (0);
    while (i < nmemb)
    {
        ((char *)ptr)[i] = 0;
        i++;
    }
    return (ptr);
}

int     main(int ac, char **av)
{
    printf("%s", (char *)ft_calloc(5, 0));
    return (0);
}
