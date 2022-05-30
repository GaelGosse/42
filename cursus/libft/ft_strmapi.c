/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 13:11:07 by ggosse            #+#    #+#             */
/*   Updated: 2022/05/30 17:09:57 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *str, char (*f)(unsigned int, char))
{
	char	*res;
	int		i;

	i = 0;
	res = ft_strdup(str);
	while (res[i])
	{
		res[i] = (*f)(i, res[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}
