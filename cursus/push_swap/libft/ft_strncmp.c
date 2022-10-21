/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 19:06:34 by ggosse            #+#    #+#             */
/*   Updated: 2022/10/21 14:39:16 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *one, const char *two, size_t length)
{
	size_t	i;

	i = 0;
	while ((one[i] || two[i]) && i < length)
	{
		if (one[i] != two[i])
		{
			return ((unsigned char)(one[i]) - (unsigned char)(two[i]));
		}
		i++;
	}
	return (0);
}
