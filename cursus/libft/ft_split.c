/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 10:27:16 by gael              #+#    #+#             */
/*   Updated: 2022/05/21 18:26:32 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int    count_sep(const char *str, char sep)
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
    printf("%i", count);
    return (count);
}

char **ft_split(const char *str, char sep)
{
    char    **result;
    // char    *item;
    int        len_word;
    int        ite;
    int        j;
    int        k;
    int        nbr_sep;

    nbr_sep = count_sep(str, sep);
    ite = 0;
    j = 0;
    len_word = 0;
    result = (char **)malloc((nbr_sep + 1) * sizeof(char *) + 1);
    // if (!result)
    //     return (NULL);
    while (ite < nbr_sep + 1)
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
            result[ite] = (char *)malloc(len_word * sizeof(char) + 1);
        ite++;
    }
    ite = 0;
    j = 0;
    k = 0;
    while (ite < nbr_sep + 1)
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
        while (str[j] == sep)
            j++;
        ite++;
    }
    result[ite] = (char *)malloc(sizeof(char) + 1);
    result[ite][0] = '\0';
    return (result);
}

void    print_array(char    **arr)
{
    int    i;

    i = 0;
    while (arr[i])
    {
        printf("arr[%i]: %s \n", i, arr[i]);
        i++;
    }
}

int    main(void)
{
    char    *str = "       abc   def gh    ijkl  mnop   ";
    
    print_array(ft_split(str, ' '));
    
    return (0);
}