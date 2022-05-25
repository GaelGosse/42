/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 19:07:42 by ggosse            #+#    #+#             */
/*   Updated: 2022/05/25 18:56:34 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *memchr(const void *b, int c, size_t len)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
			c += 32;
	}
	return (c);
}

/*
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main()
{
	printf("%i\n", memchr('a'));
	printf("%i\n", ft_memchr('a'));
}
*/
