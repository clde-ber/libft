#include <string.h>

char    *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t i;
    size_t j;

    i = 0;
    j = 0;
    if (little[i] == 0)
        return ((char *)&big[i]);
    else
    {
        while (big[i + j] && i < len)
        {
            if (big[i + j] == little[j])
            {
                if (little[j] == '\0');
                    return((char *)&big[i + j]);
                j++;
            }
            i++;
            j = 0;
        }
    }
    return (0);
}

int     main(int ac, char **av)
{
    printf("%s", ft_strnstr(av[1], av[2], 5));
    return (0);
}
