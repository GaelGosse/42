/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 19:05:30 by ggosse            #+#    #+#             */
/*   Updated: 2022/05/17 19:34:24 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		i;
	size_t		j;

	j = 0;
	i = 0;
	while (i < len || big[i] != '\0')
	{
		while ((little[j] == big[i]) && (little[i] != '\0'))
		{
			
			j++;
		}
		if (little[i] != '\0')
			return ((char *)(&big[i]));
		i++;
		printf("i: %li \n", i);
		printf("big[i] != '0': %i \n", big[i] != '\0');
		printf("i < len: %i \n", i < len);
	}
	return (NULL);
}

int main(void)
{
	printf("%s \n", ft_strnstr("abc defg hij kl mnop", "ef", 5));
	return (0);
}
