/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gael <gael@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 21:26:10 by ggosse            #+#    #+#             */
/*   Updated: 2022/05/12 17:14:43 by gael             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void ft_bzero(void *str, size_t n)
{
	// memset \0
}

int main()
{
	char	a[] = "abcdef ghijk";
	
	printf("%i\n", bzero('a'));
	printf("%i \n", ft_bzero(a + 3, 5));
}