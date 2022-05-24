/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 14:48:06 by ggosse            #+#    #+#             */
/*   Updated: 2022/05/24 15:49:22 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
	// manage INT MIN/MAX errors
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
	}
	
	// manage sign if nb negative => -nb become +nb
	if (n < 0 && n != -2147483648)
	{
		ft_putchar_fd('-', fd);
		n *= -1; 
	}

	// if nb is digit => write 
	if (n < 10)
	{
		ft_putchar_fd(n + '0', fd);
	}
	else
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	// if nb is number => 
	//		fct		nb / 10
	//		fct		nb % 10
}

// int	main()
// {
// 	printf("\n"); ft_putnbr_fd(1, 1);
// 	printf("\n"); ft_putnbr_fd(-1, 1);
// 	printf("\n"); ft_putnbr_fd(0, 1);
// 	printf("\n"); ft_putnbr_fd(-0, 1);
// 	printf("\n"); ft_putnbr_fd(7943, 1);
// 	printf("\n"); ft_putnbr_fd(-7943, 1);
// }