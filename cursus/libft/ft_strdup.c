/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gael <gael@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 15:55:59 by ggosse            #+#    #+#             */
/*   Updated: 2022/05/28 15:43:00 by gael             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*result;
	int		i;

	i = 0;
	result = (char *)malloc(ft_strlen(src) * sizeof(char) + 1);
	if (!result)
		return (NULL);
	while (src[i])
	{
		result[i] = src[i]; 
		i++;
	}
	return (result);
}

// int main()
// {
// 	char	*ori = "abc";
// 	char	*cpy;

// 	cpy = ft_strdup(ori);

// 	printf("cpy %s", cpy);
// }