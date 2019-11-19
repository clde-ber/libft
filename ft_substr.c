#include <string.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t i;
    size_t j;
    char *ptr;

    i = 0;
    if(!(ptr = (char*)malloc(sizeof(s))))
        return (0);
    while (i < len)
    {
        if (i >= start)
        {
            ptr[j] = s[i];
            j++;
        }
        i++;
    }
    return (ptr);
}

int main(int ac, char **av)
{
    printf("%s", ft_substr(av[1], 5, 19));
    return (0);
}
