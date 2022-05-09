/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 22:12:45 by ggosse            #+#    #+#             */
/*   Updated: 2022/05/09 19:34:53 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int	chr)
{
	if ((chr >= 'A') && (chr <= 'Z'))
	{
			chr += 32;
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
	printf("%i\n", tolower('a'));
	printf("%i\n", ft_tolower('a'));
}
*/