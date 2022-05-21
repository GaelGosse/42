/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 19:05:21 by ggosse            #+#    #+#             */
/*   Updated: 2022/05/18 12:42:50 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "libft.h"
#include <stdio.h>

char	*ft_strrchr(const char *str, int search)
{
	size_t	i;

	i = ft_strlen((const char	*)(str));
	while(i > 0)
	{
		if(str[i] == search)
		{
			return ((char *)(&str[i]));
		}
		i--;
	}
	return (NULL);
}

// int main()
// {
// 	printf("%s \n", ft_strrchr("abc defg h ijkl mnop", 'e'));
// 	printf("%s \n", strrchr("abc defg h ijkl mnop", 'e'));

// 	return (0);
// }
