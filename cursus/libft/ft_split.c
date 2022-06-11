/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gael <gael@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 10:27:16 by gael              #+#    #+#             */
/*   Updated: 2022/06/11 18:53:22 by gael             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	word_count(const char *str, char sep)
{
	size_t	nbr_word;
	size_t	i_wc;

	i_wc = 0;
	nbr_word = 0;
	while (str[i_wc])
	{
		if (str[i_wc] == sep)
			i_wc++;
		if (str[i_wc] && str[i_wc] != sep)
		{
			nbr_word++;
			while (str[i_wc] && str[i_wc] != sep)
				i_wc++;
		}
	}
	return (nbr_word);
}

size_t	word_len(const char *str, char sep, size_t i_wl)
{
	size_t	nbr_char;

	nbr_char = 0;
	while (str[i_wl] && str[i_wl] != sep)
	{
		i_wl++;
		nbr_char++;
	}
	return (nbr_char);
}

char	**ft_split(const char *str, char sep)
{
	char	**tab;
	size_t	tabi;
	size_t	stri;
	size_t	i_ins;

	if (!tab)
		return (NULL);
	stri = 0;
	tabi = 0;
	tab = (char **)malloc(sizeof(char *) * (word_count(str, sep) + 1));
	while (tabi < word_count(str, sep))
	{
		i_ins = 0;
		while (str[stri] && str[stri] == sep)
			stri++;
		if (str[stri] && str[stri] != sep)
		{
			tab[tabi] = (char *)malloc((word_len(str, sep, stri) + 1) * sizeof(char));
			if (!tab[tabi])
				return (NULL);
			while (str[stri] && str[stri] != sep)
				tab[tabi][i_ins++] = str[stri++];
			tab[tabi][i_ins] = '\0';
		}
		tabi++;
	}
	tab[tabi] = 0;
	return (tab);
}

/*
int main()
{
	// char	**tabstr;
	// size_t    i; 

    // i = 0;	
	// tabstr = 
	ft_split("Suspendisse", 0);
	// while (tabstr[i])
	// {
	// 	printf("tabstr[i] %s\n", tabstr[i]);
	// 	i++;
	// }
    return (0);
}
*/

/*
int    count_word(const char *str, char sep)
{
	int    ite;
	int    count;
	count = 0;
	ite = 0;
	while (str[ite] != '\0')
	{
		while (str[ite] == sep)
			ite++;
		while (str[ite] != sep && str[ite] != '\0')
			ite++;
		if (str[ite] != '\0')
			count++;
		ite++;
	}
	return (count);
}

void    allocm(const char *str, char sep, int ite, int j, int len_word, int nbr_word, char **result)
{
	while (str[j] == sep && str[j] != '\0')
		j++;
	while (ite < nbr_word + 1)
	{
		len_word = 0;
		while (str[j] != sep && str[j] != '\0')
		{
			len_word++;
			j++;
		}
		while (str[j] == sep)
			j++;
		if (len_word != 0)
			result[ite] = (char *)malloc((len_word + 1) * sizeof(char));
		ite++;
	}
}

void    wrte(const char *str, char sep, int ite, int j, int k, int nbr_word, char **result)
{
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
	char    **result;
	int        len_word;
	int        ite;
	int        j;
	int        k;
	int        nbr_word;
	nbr_word = count_word(str, sep);
	ite = 0;
	j = 0;
	k = 0;
	len_word = 0;
	result = (char **)malloc((nbr_word + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	allocm(str, sep, ite, j, len_word, nbr_word, result);
	wrte(str, sep, ite, j, k, nbr_word, result);
	return (result);
}

*/

/*
static size_t	word_count(char const *str, char sep)
{
	size_t	ite;
	size_t	count;

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

static size_t	word_len(char const *str, char sep, int ite)
{
	size_t	len;

	len = 0;
	while (str[ite] && str[ite] != sep)
	{
		len++;
		ite++;
	}
	return (len);
}

static char	**ft_freetab(char **s, size_t n)
{
	while (n > 0)
	{
		free(s[n]);
		n--;
	}
	free(s);
	return (NULL);
}

char	**ft_split(char const *str, char sep)
{
	size_t	sti;
	size_t	ite;
	size_t	ins;
	char	**res;

	res = (char **)malloc(sizeof(char *) * (word_count(str, sep) + 1));
	if (!res)
		return (NULL);
	sti = 0;
	ite = 0;
	while (ite < word_count(str, sep))
	{
		while (str[sti] && str[sti] == sep)
			sti++;
		ins = 0;
		res[ite] = (char *)malloc(sizeof(char) * (word_len(str, sep, sti) + 1));
		if (!res[ite])
			return (ft_freetab(res, ite), NULL);
		while (str[sti] && str[sti] != sep)
			res[ite][ins++] = str[sti++];
		res[ite][ins] = '\0';
		ite++;
	}
	res[ite] = 0;
	return (res);
}

*/
