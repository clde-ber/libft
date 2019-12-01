#include <string.h>
#include <stdlib.h>
#include <stdio.h>

static size_t	ft_strlen(char const *s)
{
	size_t i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

static size_t count_malloc(char const *s, char c)
{
	size_t i;
	size_t count;

	i = 0;
	count = 1;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			count++;
		i++;
	}
//	printf("Ft_Count - Nombre de mots : %zu\n", count);
	return (count);
}

static size_t  cut_s(size_t i, char const *s, char c)
{
	size_t	count;

	count = 0;
//	printf("Ft_Cut_s - 1 - La chaine recu est = %s\n", s);
	while (s[i] == c && s[i])
		i++;
	while (s[i] != c && s[i])
	{
		count++;
		i++;
	}
//	printf("Ft_Cut_s - 2 - La taille du mot est  = %lu\n", count);
	return (count);
}

static char *fill_split(char *str, size_t i, char const *s, char c)
{
	size_t k;

	k = 0;
	while (s[i] == c)
		i++;
	while (s[i] != c)
	{
		if (s[i] != c)
		{
			str[k] = s[i];
			k++;
		}
		i++;
	}
	str[k] = '\0';
//	printf("Chaine de caracteres - %s\n", str);
	return (str);
}

char **ft_split(char const *s, char c)
{
	size_t i;
	size_t j;
	size_t k;
	size_t l;
	char **split;

	i = 0;
	j = 0;
	k = cut_s(i, s, c);
	l = 0;
	if (!(split = malloc(sizeof(char *) * (count_malloc(s, c)))))
		return (0);
	while (j < count_malloc(s, c) - 1)
	{
		if (!(split[j] = malloc(sizeof(char) * (k + 1))))
			return (0);
		while (s[i])
		{
	//		printf("Ft_split - 3 - Boucle While\n");
			if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
				break ;
			i++;
		}
		i += 1;
	//	printf("Valeur de i apres la boucle - %lu\n", i);
		if (i < ft_strlen(s))
			k = cut_s(i, s, c);
		split[j] = fill_split(split[j], l, s, c);
		l = i;
	//	printf("Ft_Split - 1 - Valeur de K dans boucle =  %lu\n", k);
	//	printf("Ft_Split - 2 - s =  %lu\n", k);
		j++;
	//	printf("valeur de j - %lu\n", j);
	}
	split[j] = 0;
	return (split);
}

int     main(int ac, char **av)
{
	(void)ac;
	size_t i;

	i = 0;
	while (i < count_malloc(av[1], 'c'))
	{
		printf("Valeur de retour du main - %s\n", ft_split(av[1], 'c')[i]);
		i++;
	}
	free(ft_split(av[1], 'c'));
	return (0);
}
