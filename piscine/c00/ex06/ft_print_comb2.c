/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 16:56:02 by ggosse            #+#    #+#             */
/*   Updated: 2022/03/21 16:54:25 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print(int one, int two)
{
	ft_putchar((two / 10) + '0');
	ft_putchar((two % 10) + '0');
	ft_putchar(' ');
	ft_putchar((one / 10) + '0');
	ft_putchar((one % 10) + '0');
}

void	ft_print_comb2(void)
{
	int	left;
	int	right;

	right = 0;
	left = 0;
	while (left <= 98)
	{
		right = left + 1;
		while (right <= 99)
		{
			print(right, left);
			if (left != 98 && right != 99)
				ft_putchar(',');
			right++;
		}
		left++;
	}
}
