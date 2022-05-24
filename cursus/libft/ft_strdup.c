/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 15:55:59 by ggosse            #+#    #+#             */
/*   Updated: 2022/05/24 18:07:12 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char * ft_strdup(const char * src)
{
	char	*result;
	int		i;

	i = 0;
	result = (char *)malloc(ft_strlen(src) * sizeof(char) + 1);
	while (src[i])
	{
		result[i] = src[i]; 
		i++;
	}
	return (result);
}

int main()
{
	char	*ori = "abc";
	char	*cpy;

	cpy = ft_strdup(ori);

	printf("cpy %s", cpy);
}