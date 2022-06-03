/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gael <gael@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 15:49:00 by gael              #+#    #+#             */
/*   Updated: 2022/06/03 01:07:21 by gael             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	word_count(const char *str, char sep)
{
	size_t ite;
	size_t count; 

    ite = 0;
    count = 0;
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

static size_t	word_len(const char *str, char sep, size_t ite)
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

static char	**ft_free(char **s, size_t n)
{
	while (n > 0)
	{
		free(s[n]);
		n--;
	}
	free(s);
	return (NULL);
}

char	**ft_split(const char *str, char sep)
{
	size_t	ite;
	size_t	ins; 
	size_t	stri; 
	size_t	nbr_word;
	char    **res;

	nbr_word = word_count(str, sep);
	res = (char **)malloc(sizeof(char *) * nbr_word + 1);
	if (!res)
		return (NULL);
    stri = 0;
    ite = 0;
	while (ite < nbr_word)
	{
		while (str[stri] && str[stri] == sep)
			stri++;
		ins = 0;
		res[ite] = (char *)malloc(sizeof(char) * word_len(str, sep, stri) + 1);
		if (!res[ite])
			return (ft_free(res, ite), NULL);
		while (str[stri] && str[stri] != sep)
			res[ite][ins++] = str[stri++];
		res[ite][ins] = '\0';
		ite++;
	}
	res[ite] = 0;
	return (res);
}

/*

size_t    word_count(const char *str, char sep)
{
    size_t        ite;
    size_t        count;

    count = 0;
    ite = 0;
    while (str[ite] != '\0')
    {
        while (str[ite] == sep)
            ite++;
        while (str[ite] != sep && str[ite] != '\0')
            ite++;
        if (str[ite + 1] != '\0')
            count++;
        ite++;
    }
    return (count);
}

static size_t    word_len(const char *str, char sep, int ite)
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

static char    **ft_free(char **str, size_t n)
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
    char    **res;
    size_t	ite;
    size_t	ins;
    size_t	stri;
    size_t	nbr_word; 

    nbr_word = word_count(str, sep);
    stri = 0;
    ins = 0;
    ite = 0;
    res = (char **)malloc(sizeof(char *) * nbr_word + 1);
    if (!res)
        return (NULL);
    while (ite < nbr_word)
    {
        while (str[stri] && str[stri] == sep)
            stri++;
        ins = 0;
        res[ite] = (char *)malloc(sizeof(char) * word_len(str, sep, stri) + 1);
        if (!res[ite])
            return (ft_free(res, ite), NULL);
        while (str[stri] && str[stri] != sep)
            res[ite][ins++] = str[stri++];
        res[ite][ins] = '\0';
        ite++;
    }
    res[ite] = 0;
    return (res);
}


*/