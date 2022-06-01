/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 10:27:16 by gael              #+#    #+#             */
/*   Updated: 2022/06/01 22:48:19 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static size_t	word_count(const char *str, char sep)
{
	size_t	ite;
	size_t	count;

    count = 0;
    ite = 0;
	while (str[ite])
	{
		while (str[ite] && str[ite] != sep)
			ite++;
		if (str[ite] && str[ite] != sep)
		{
			count++;
			while (str[ite] && str[ite] != sep)
				ite++;
		}
	}
	return (count);
}

static size_t	word_len(const char *str, char sep, int ite)
{
	size_t len;

    len = 0;
	while (str[ite] && str[ite] != sep)
	{
		len++;
		ite++;
	}
	return (len);
}

static char	**ft_free(char **str, size_t n)
{
	while (n > 0)
	{
		free(str[n]);
		n--;
	}
	free(str);
	return (NULL);
}

char **ft_split(const char *str, char sep)
{
    char	**res;
    size_t	ite;
	size_t	ins;
	size_t	stri;

    stri = 0;
    ins = 0;
	ite = -1;
	res = (char **)malloc(sizeof(char *) * word_count(str, sep) + 1);
	if (!res)
		return (NULL);
	printf("A");
	while (ite++ < word_count(str, sep))
	{
		while (str[stri] && str[stri] == sep)
			stri++;
		ins = 0;
		res[ite] = (char *)malloc(sizeof(char) * word_len(str, sep, ite) + 1);
		if (!res)
			return (ft_free(res, ite), NULL);
		while (str[ite] && str[ite] != sep)
			res[ite][ins++] = str[stri++];
		res[ite][ins] = '\0';
	}
	res[ite] = 0;
	return (res);
}

/*
int main()
{
	char	**tabstr;
	int i;

    i = 0;
	if (!(tabstr = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse", ' ')))
		printf("NULL");
	else
	{
		while (tabstr[i] != NULL)
		{
			printf("tab: %s", tabstr[i]);
			write(1, "\n", 1);
			i++;
		}
	}
}
// */
/*
int    count_word(const char *str, char sep)
{
    int    ite;
    int    count;

    count = 0;
    ite = 0;
    while (str[ite])
    {
        while (str[ite] && str[ite] == sep)
            ite++;
        if (str[ite] && str[ite] != sep)
        {
            count++;
            while (str[ite] && str[ite] != sep)
                ite++;
        }
    }
    return (count);
}

static char **ft_free(char **arr, size_t n)
{
    while (n > 0)
    {
        free(arr[n]);
        n--;
    }
    free(arr);
    return (NULL);
}

int    allm(const char *str, char sep, int nbr_word, char **result)
{
    int len_word;
    int ite;
    int j;

    j = 0;
    ite = 0;
    len_word = 0;
    while (str[j] == sep)
        j++;
    while (ite < nbr_word + 1)
    {
        len_word = 0;
        while (str[j] == sep)
            j++;
        while (str[j] != sep && str[j])
        {
            len_word++;
            j++;
        }
        if (len_word != 0)
        {
            result[ite] = (char *)ft_calloc((len_word + 1), sizeof(char));
            if (!result[ite])
                return (ft_free(result, ite), 0);
        }
        ite++;
    }
    return (1);
}

void    wrte(const char *str, char sep, int nbr_word, char **result)
{
    int ite;
    int j;
    int k;
    
    ite = 0;
    j = 0;
    k = 0;
    while (str[j] == sep)
        j++;
    while (ite < nbr_word)
    {
        k = 0;
        while (str[j] == sep)
            j++;
        while (str[j] != sep && str[j] != '\0')
        {
            result[ite][k] = str[j];
            k++;
            j++;
        }
        result[ite][k] = '\0';
        ite++;
    }
    result[ite] = 0;
}

char **ft_split(const char *str, char sep)
{
    char	**result;
    int		nbr_word;

    nbr_word = count_word(str, sep);
    result = (char **)ft_calloc((nbr_word + 1), sizeof(char *));
    if (!result)
        return (NULL);
    if (allm(str, sep, nbr_word, result) == 0)
        return (NULL);
    wrte(str, sep, nbr_word, result);
    return (result);
}
*/