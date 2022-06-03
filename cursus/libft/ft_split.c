/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gael <gael@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 10:27:16 by gael              #+#    #+#             */
/*   Updated: 2022/06/03 01:23:20 by gael             ###   ########.fr       */
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
	size_t	stri;
	size_t	ite;
	size_t	ins;
	char	**res;

	res = (char **)malloc(sizeof(char *) * (word_count(str, sep) + 1));
	if (!res)
		return (NULL);
	stri = 0;
	ite = 0;
	while (ite < word_count(str, sep))
	{
		while (str[stri] && str[stri] == sep)
			stri++;
		ins = 0;
		res[ite] = (char *)malloc(sizeof(char) * (word_len(str, sep, stri) + 1));
		if (!res[ite])
			return (ft_freetab(res, ite), NULL);
		while (str[stri] && str[stri] != sep)
			res[ite][ins++] = str[stri++];
		res[ite][ins] = '\0';
		ite++;
	}
	res[ite] = 0;
	return (res);
}
*/

/*
int main()
{
	size_t    i;
	char	**tabstr;

    i = 0;
	if (!(tabstr = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse", ' ')))
		printf("NULL");
	else
	{
		while (tabstr[i] != NULL)
		{
			printf("%s\n", tabstr[i]);
			// write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}
// */


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
			printf("%s\n", tabstr[i]);
			i++;
		}
	}
}
// */
/*
size_t    count_word(const char *str, char sep)
{
    size_t    ite;
    size_t    count;

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

size_t    allm(const char *str, char sep, size_t nbr_word, char **result)
{
    size_t len_word;
    size_t ite;
    size_t j;

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
			printf("\nlen_word %li\n", len_word);
            result[ite] = (char *)malloc((len_word + 1) * sizeof(char));
            if (!result[ite])
                return (ft_free(result, ite), 0);
        }
        ite++;
    }
    return (1);
}

void    wrte(const char *str, char sep, size_t nbr_word, char **result)
{
    size_t ite;
    size_t j;
    size_t k;
    
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
    size_t		nbr_word;

    nbr_word = count_word(str, sep);
    result = (char **)malloc((nbr_word + 1) * sizeof(char *));
    if (!result)
        return (NULL);
    if (allm(str, sep, nbr_word, result) == 0)
        return (NULL);
    wrte(str, sep, nbr_word, result);
	printf("\n");
    return (result);
}

*/