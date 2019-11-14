#include <stdlib.h>

int     ft_atoi(const char *nptr)
{
    int i;
    int j;
    int res;

    i = 0;
    j = 1;
    res = 0;
    if (nptr[i] == '-')
            j = -j;
    i++;
    while (nptr[i] >= '0' && nptr[i] <= '9')
    {
        res = res + (nptr[i] - '0');
        res = res * 10;
        i++;
    }
    return ((res * j) / 10);
}

int     main(int ac, char **av)
{
    printf("%d", ft_atoi(av[1]));
    // printf("%d", atoi(av[1]));
    return (0);
}
