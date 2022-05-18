/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 21:26:10 by ggosse            #+#    #+#             */
/*   Updated: 2022/05/18 12:02:45 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

void ft_bzero(void *str, size_t n)
{
	ft_memset((char *)(str), '\0', n);
}
// void	ft_bzero(void *str, int len)
// {
// 	unsigned char *p;
// 	int 	i;
	
// 	p = str;
// 	i = 0;
// 	while (i < len)
// 	{
// 		p[i] = '\0';
// 		i++;
// 	}
// }

// int main()
// {
// 	char	a[] = "abcdef ghijk";

// 	printf("%s \n", a);
// 	bzero(a + 2, 2);
// 	printf("%s \n\n", a);

// 	char	b[] = "abcdef ghijk";

// 	printf("%s \n", b);
// 	ft_bzero(b + 2, 2);
// 	printf("%s \n", b);
// }
