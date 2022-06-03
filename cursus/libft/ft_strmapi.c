/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gael <gael@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 13:11:07 by ggosse            #+#    #+#             */
/*   Updated: 2022/06/03 00:39:52 by gael             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdupli(const char *src)
{
	char	*result;
	int		i;

	i = 0;
	result = (char *)malloc((ft_strlen(src) + 1) * sizeof(char));
	if (!result)
		return (NULL);
	while (src[i])
	{
		result[i] = src[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}

char	*ft_strmapi(const char *str, char (*f)(unsigned int, char))
{
	char	*res;
	int		i;

	i = 0;
	// res = NULL;
	res = ft_strdupli(str);
	// ft_memcpy(res, str, ft_strlen(str));
	while (res[i])
	{
		res[i] = (*f)(i, res[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}
