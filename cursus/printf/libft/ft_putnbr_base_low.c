/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_low.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 16:27:29 by ggosse            #+#    #+#             */
/*   Updated: 2022/06/24 16:16:11 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

static void	ft_print_base(int nbr)
{
	char	*base;

	base = "0123456789abcdef";
	if (nbr == -2147483648)
	{
		ft_putstr_fd("-2147483648", 1);
		return ;
	}
	if (nbr < 0 && nbr != -2147483648)
	{
		ft_putchar_fd('-', 1);
		nbr *= -1;
	}
	if (nbr < 16)
		ft_putchar_fd(base[nbr], 1);
	else
	{
		ft_print_base(nbr / 16);
		ft_putchar_fd(base[nbr % 16], 1);
	}
}

int	ft_putnbr_base_low(unsigned int nbr)
{
	ft_print_base(nbr);
	return (num_hexa_len(nbr));
}
