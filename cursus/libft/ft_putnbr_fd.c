/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 14:48:06 by ggosse            #+#    #+#             */
/*   Updated: 2022/05/19 22:33:47 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putnbr_fd(int n, int fd)
{
	// manage INT MIN/MAX errors
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
	}
	
	// manage sign if nb negative => -nb become +nb
	if (n < 0 && n != -2147483648)
	{
		write(fd, '-', 1);
		n *= -1; 
	}

	// if nb is digit => write 
	if (n < 10)
	{
		write(fd, n, 1);
	}
	else
	{
		ft_putnbr_fd(n / 10);
		ft_putnbr_fd(n % 10);
	}
	// if nb is number => 
	//		fct		nb / 10
	//		fct		nb % 10
}