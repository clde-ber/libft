static int  ft_strlen(const char *s)
{
    int i;

    i = 0;
    while (s[i])
        i++;
    return (i);
}

char        *ft_strrchr(const char *s, int c)
{
    int i;

    i = ft_strlen(s);
    while (i >= 0)
    {
        if (s[i] == (char)c)
        //  printf("%d", i);
            return ((char *)&s[i]);
        i--;
    }
    return (0);
}

int         main(int ac, char **av)
{
    printf("%s", ft_strrchr(av[1], av[2][0]));
    return (0);
}
