/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 19:05:30 by ggosse            #+#    #+#             */
/*   Updated: 2022/05/25 18:55:46 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "libft.h"

char    *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t	b;
    size_t	l;
    size_t	lil_len;
	char	*conv_big;

    b = 0;
    l = 0;
    conv_big = (char *)big;
    lil_len = ft_strlen(little); 
    if (little[0] == '\0')
        return (conv_big);
    while (b < len && big[b] != '\0')
    {
        while (big[b] == little[l] && little[l] != '\0' && l < len)
        {
            b++;
            l++;
        }
        if (l == lil_len )
            return (conv_big + b);
        b++;
    }
    return (NULL);
}

// int main(void)
// {
// 	printf("defg hij kl mnop\n%s\n", ft_strnstr("abc defg hij kl mnop", "c ", 4));
// 	printf("(null) : %s \n", ft_strnstr("abc defg hij kl mnop", "ef", 4));
// 	printf("(null) : %s \n", ft_strnstr("abc defg hij kl mnop", "bc def", 4));
// 	return (0);
// }
