/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 19:05:21 by ggosse            #+#    #+#             */
/*   Updated: 2022/05/13 11:07:24 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int search)
{
	int	i;

	i = ft_strlen((char	*)(str));
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
	printf("%s \n", strrchr("abc defg h ijkl mnop", 'x'));
	printf("%s \n", ft_strrchr("abc defg h ijkl mnop", 'x'));
	return (0);
}