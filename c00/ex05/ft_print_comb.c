/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 10:54:00 by ggosse            #+#    #+#             */
/*   Updated: 2022/03/14 15:07:41 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = '0';

	while (a <= '9')
	{		
		b = a + 1;
		while (b <= '9')
		{
			c = b + 1;
			while (c <= '9')
			{
				write(1, &a, 1);
				write(1, &b, 1);
				write(1, &c, 1);
				if(a != '7')
					write(1, ", ", 1);
				else 
					write(1, "\n", 1);
				c++;
			}	
			b++;
		}
		a++;
	}
}
void	ft_print_comb(void);

int	main(void)
{
	ft_print_comb();
}
