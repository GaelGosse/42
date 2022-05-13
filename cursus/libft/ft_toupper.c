/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gael <gael@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 15:53:52 by ggosse            #+#    #+#             */
/*   Updated: 2022/05/12 16:22:50 by gael             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int chr)
{
	if ((chr >= 'a') && (chr <= 'z'))
	{
			chr -= 32;
	}
	return (chr);
}

/*
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main()
{
	printf("%i\n", toupper('a'));
	printf("%i\n", ft_toupper('a'));
}
*/