#include <string.h>
#include <stdlib.h>
#include <stdio.h>

size_t	ft_strlen(char const *s)
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
	size_t j;
	size_t count;

	i = 0;
	count = 1;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			count++;
		i++;
	}
	printf("Ft_Count - Nombre de mots : %zu\n", count);
	return (count);
}

size_t  cut_s(size_t i, char const *s, char c)
{
	size_t	count;

	count = 0;
	printf("Ft_Cut_s - 1 - La chaine recu est = %s\n", s);
	while (s[i] == c && s[i])
		i++;
	while (s[i] != c && s[i])
	{
		count++;
		i++;
	}
	printf("Ft_Cut_s - 2 - La taille du mot est  = %d\n", count);
	return (count);
}

char *fill_split(size_t i, char *split, char const *s, char c)
{
	size_t j;
	size_t k;
	char *str;

	j = 0;
	k = 0;
	while (s[j])
	{
		if (s[j] != c)
		{
			str[k] = s[j];
			k++;
		}
		j++;
	}
	str[k] = '\0';
	return (str);
}

char **ft_split(char const *s, char c)
{
	size_t i;
	size_t i2;
	size_t j;
	size_t k;
	char **split;

	i = 0;
	i2 = 0;
	j = 0;
	k = cut_s(i, s, c);
	if (!(split = malloc(sizeof(char *) * (count_malloc(s, c)))))
		return (0);
	while (j < count_malloc(s, c) - 1)
	{
		if (!(split[j] = malloc(sizeof(char) * (k + 1))))
			return (0);
		while (s[i])
		{
			printf("Ft_split - 3 - Boucle While\n");
			if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
				break ;
			i++;
		}
		i += 1;
		printf("Valeur de i apres la boucle - %lu\n", i);
		k = cut_s(i, s, c);
		printf("Ft_Split - 1 - Valeur de K dans boucle =  %lu\n", k);
		printf("Ft_Split - 2 - s =  %lu\n", k);
	//	split[j] = fill_split(i, split[j], s, c);
		j++;
		printf("valeur de j - %lu\n", j);
	}
	split[j - 1] = 0;
	return (split);
}

int     main(void)
{
	//printf("Fonction Count Malloc = %li\n", count_malloc("cchellocctoiccsalut", 'c'));
	//printf("Fonction cut_s = %li\n", cut_s(0, "cchellocctoiccsalut", 'c'));
	ft_split("cchellocctoiccsalut", 'c');
	return (0);
}
