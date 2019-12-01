#include <stdlib.h>
#include <stdio.h>

static int ft_strlen(int n)
{
    int i;

    i = 0;
    if (n <= 2147483647 && n >= -2147483648)
    {
        if (n < 0)
            n = -n;
        while (n > 0)
        {
            n = n / 10;
            i++;
        }
    }
    return (i + 1);
}

char *ft_itoa(int n)
{
    int i;
    int j;
    int k;
    char *str;

    i = 0;
    j = 0;
    k = ft_strlen(n);
    str = malloc(sizeof(char) * ft_strlen(n) + 1);
    if (n <= 2147483647 && n >= -2147483648)
        {
            if (n < 0)
                n = -n;
            while (j++ <= ft_strlen(n) + 1)
            {
                str[i++] = (n % 10) + '0';
                n = n / 10;
                printf("%c", 'a');
            }
            i = 0;
            while (i < ft_strlen(n) / 2)
        }
    return (str);
}
