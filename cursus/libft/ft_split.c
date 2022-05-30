/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 10:27:16 by gael              #+#    #+#             */
/*   Updated: 2022/05/30 16:54:13 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

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

int    allocm(const char *str, char sep, int ite, int j, int len_word, int nbr_word, char **result)
{
    while (str[j] == sep)
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
        {
            result[ite] = (char *)malloc((len_word + 1) * sizeof(char));
            if (!result)
                return (0);
        }
        ite++;
    }
    return (1);
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
    char	**result;
    int		len_word;
    int		ite;
    int		j;
    int		k;
    int		nbr_word;

    nbr_word = count_word(str, sep);
    ite = 0;
    j = 0;
    k = 0;
    len_word = 0;
    result = (char **)malloc((nbr_word + 1) * sizeof(char *));
    if (!result)
        return (NULL);
    if (allocm(str, sep, ite, j, len_word, nbr_word, result) == 0)
        return (NULL);
    wrte(str, sep, ite, j, k, nbr_word, result);
    return (result);
}

/*
int    main(void)
{
    char    *str = "       abc   def gh    ijkl  mnop   ";
    char    charset =  ' ';

    // result = ft_split(str, charset);    
    ft_split(str, charset);

    
    return (0);
}
*/