/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_low.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gael <gael@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 16:27:29 by ggosse            #+#    #+#             */
/*   Updated: 2022/06/23 01:11:04 by gael             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	num_len(long int nbr)
{
	long int	len;

	len = 1;
	if (nbr < 0)
	{
		nbr *= -1;
		len++;
	}
	while (nbr > 9)
	{
		nbr = nbr / 10;
		len++;
	}
	return (len);
}

int	ft_putnbr_base_low(int nbr)
{
	char	*base;
	int		len; 

    len = num_len(nbr);
	base = malloc(sizeof(char) * (16 + 1));
	if (!base)
	{
		return (0);
	}
	base = "0123456789abcdef";
	if (nbr == -2147483648)
	{
		// printf("\nintmax\n");
		ft_putstr_fd("-2147483648", 1);
		return (11);
	}
	if (nbr < 0 && nbr != -2147483648)
	{
		// printf("\nnegatif\n");
		ft_putchar_fd('-', 1);
		nbr *= -1;
	}
	if (nbr < 16)
	{
		// printf("\nunites\n");
		ft_putchar_fd(base[nbr], 1);
	}
	else
	{
		// printf("\ncalcul\n");
		ft_putnbr_base_low(nbr / 16);
		ft_putchar_fd(base[nbr % 16], 1);
		// ft_putnbr_base_low(nbr % 16);
	}
	return (len);
}

/*
int main(){
	ft_putnbr_base_low(1);printf(" 1\n");
	ft_putnbr_base_low(2);printf(" 2\n");
	ft_putnbr_base_low(3);printf(" 3\n");
	ft_putnbr_base_low(4);printf(" 4\n");
	ft_putnbr_base_low(5);printf(" 5\n");
	ft_putnbr_base_low(6);printf(" 6\n");
	ft_putnbr_base_low(7);printf(" 7\n");
	ft_putnbr_base_low(8);printf(" 8\n");
	ft_putnbr_base_low(9);printf(" 9\n");
	ft_putnbr_base_low(10);printf(" 10\n");
	ft_putnbr_base_low(11);printf(" 11\n");
	ft_putnbr_base_low(12);printf(" 12\n");
	ft_putnbr_base_low(13);printf(" 13\n");
	ft_putnbr_base_low(14);printf(" 14\n");
	ft_putnbr_base_low(15);printf(" 15\n");
	ft_putnbr_base_low(16);printf(" 16\n");
	ft_putnbr_base_low(17);printf(" 17\n");
	ft_putnbr_base_low(18);printf(" 18\n");
	ft_putnbr_base_low(19);printf(" 19\n");
	ft_putnbr_base_low(20);printf(" 20\n");
}
*/