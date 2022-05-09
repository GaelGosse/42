/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 19:05:21 by ggosse            #+#    #+#             */
/*   Updated: 2022/05/09 23:40:09 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int search)
{
	int	i;

	i = ft_strlen((char	*)(str)) - 1;
	while(i > 0)
	{
		if(str[i] == search)
		{
			return ((char *)(&str[i]));
		}
		i--;
	}

	return ((char *)(&str[i]));
}

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main()
{
	// printf("%s \n", strrchr("mais ou est donc or ni car", 'x'));
	printf("%s \n", ft_strrchr("mais ou est donc or ni car", 'x'));
	return (0);
}