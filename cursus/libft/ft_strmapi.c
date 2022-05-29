/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gael <gael@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 13:11:07 by ggosse            #+#    #+#             */
/*   Updated: 2022/05/28 15:44:49 by gael             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(const char *str, char (*f)(unsigned int, char))
{
	char	*res;
	int		i;

	i = 0;
	res = (char *)malloc(ft_strlen(str) * sizeof(char));
	if (!res)
		return (NULL);
	ft_memcpy(res, str, ft_strlen(str));
	while (res[i])
	{
		res[i] = (*f)(i, res[i]);
		i++;
	}
	res[i] = '\0';
	return (res);	
}
