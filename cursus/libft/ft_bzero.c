/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 21:26:10 by ggosse            #+#    #+#             */
/*   Updated: 2022/05/13 21:06:33 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "libft.h"

void ft_bzero(void *str, size_t n)
{
	ft_memset((char	*)(str), '\0', n);
}

int main()
{
	char	a[] = "abcdef ghijk";
	bzero(a + 3, 5);
	ft_bzero(a + 3, 5);	
}