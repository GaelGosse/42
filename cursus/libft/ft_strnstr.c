/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gael <gael@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 19:05:30 by ggosse            #+#    #+#             */
/*   Updated: 2022/06/03 13:48:47 by gael             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	b;
	size_t	l;
	char	*conv_big;

	b = 0;
	l = 0;
	conv_big = (char *)big;
	if (ft_strlen(little) == 0)
		return ((char *)conv_big);
	if (little[0] == '\0')
		return (conv_big);
	while (big[b] && b < len)
	{
		l = 0;
		if (big[b] == little[l])
		{
			if (!strncmp(big + b, little + l, ft_strlen(little))
				&& ((b + ft_strlen(little)) <= len))
				return (conv_big + b);
			l++;
		}
		b++;
	}
	return (NULL);
}
