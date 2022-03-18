/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 14:14:32 by ggosse            #+#    #+#             */
/*   Updated: 2022/03/17 14:23:05 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_putnbr(int nb)
{
	if(nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if(nb < 0 && nb != -2147483648)
	{
		ft_putchar('-');
		nb *= -1; 
	}
	if(nb < 10)
	{
		ft_putchar(nb + '0');	
	}
	else
	{ 
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}
int main()
{
	ft_putnbr(-2147483648);
	write(1, "\n", 1);
	ft_putnbr(2147483647);
	write(1, "\n", 1);
	ft_putnbr(-12345);
	write(1, "\n", 1);
	ft_putnbr(-42);
        write(1, "\n", 1);
}
