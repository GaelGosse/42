/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gael <gael@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 19:05:30 by ggosse            #+#    #+#             */
/*   Updated: 2022/05/30 01:17:24 by gael             ###   ########.fr       */
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
    while (big[b] && b < len)
    {
        l = 0;
        while (big[b] == little[l] && lil_len + b <= len)
        {
            l++;
        }
        if (l == lil_len )
            return (conv_big + b);
        b++;
    }
    return (NULL);
}

// char	*ft_strnstr(const char *str, const char *to_find, size_t n)
// {
// 	size_t	i;
// 	size_t	j;
//     size_t  lil_len;

// 	i = 0;
//     lil_len = ft_strlen(to_find);
// 	if (lil_len == 0)
// 		return ((char *)str);
// 	while (str[i] && i < n)
// 	{
// 		j = 0;
// 		while (str[i] == to_find[j])
// 		{
// 			if (ft_strncmp(str[i], to_find[j], lil_len) == 0 && i + lil_len <= n)
// 				return ((char *)str + i);
// 			j++;
// 		}
// 		i++;
// 	}
// 	return (NULL);
// }

// int main(void)
// {
// 	printf("defg hij kl mnop\n%s\n", ft_strnstr("abc defg hij kl mnop", "c ", 4));
// 	printf("(null) : %s \n", ft_strnstr("abc defg hij kl mnop", "ef", 4));
// 	printf("(null) : %s \n", ft_strnstr("abc defg hij kl mnop", "bc def", 4));
// 	return (0);
// }
