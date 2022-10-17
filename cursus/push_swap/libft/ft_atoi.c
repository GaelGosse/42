/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 16:53:31 by ggosse            #+#    #+#             */
/*   Updated: 2022/10/17 18:58:21 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "../ft_push_swap.h"

static int	ft_isspace(int chr)
{
	if ((8 < chr && chr < 14) || chr == 32)
	{
		return (1);
	}
	return (0);
}

long int	ft_atoi(const char *str)
{
	long int	sign;
	long int	res;
	long int	i;

	i = 0;
	res = 0;
	sign = 1;
	while (ft_isspace(str[i]) == 1)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	// if (str[i] == '\0')
	// 	ft_error();
	while (str[i] >= 48 && str[i] <= 57)
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	printf("str[i]: %c\n", str[i]);
	if ((res * sign) == 2147483648 || (res * sign) == -2147483647)
		ft_error();
	return (res * sign);
}
