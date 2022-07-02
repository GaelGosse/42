/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tools.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 01:14:19 by gael              #+#    #+#             */
/*   Updated: 2022/07/02 17:23:05 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

static int	num_hexa_len(long int nbr)
{
	long int	len;

	len = 0;
	if (nbr < 0)
	{
		nbr *= -1;
		len++;
	}
	while (nbr > 0)
	{
		nbr = nbr / 16;
		len++;
	}
	return (len);
}

void	ft_putptr_hexa(long long int ptr)
{

	if (ptr >= 16)
	{
		ft_putptr_hexa(ptr / 16);
		ft_putptr_hexa(ptr % 16);
	}
	else
	{
		if (ptr <= 9)
			ft_putchar_fd(ptr + '0', 1);
		else
		{
			ft_putchar_fd(ptr - 10 + 'a', 1);
		}
	}
}

int	ft_putptr(long long int ptr)
{
	ft_putstr_fd("0x", 1);
	ft_putptr_hexa(ptr);
	printf("\nnum_hexa_len(ptr): %d\n", num_hexa_len(ptr));
	return (num_hexa_len(ptr));
}

