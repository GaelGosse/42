/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 12:00:13 by ggosse            #+#    #+#             */
/*   Updated: 2022/03/12 19:54:08 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_line(int x, char apex, char mid){
	int	width;

	ft_putchar(apex);
	width = 0;
	while(width < x - 2){
		ft_putchar(mid);
		width++;
	}
	if(x >= 2)
		ft_putchar(apex);
	
	ft_putchar('\n');
}
void	rush(int x, int y){
	int 	height;
	char	a;
	char	b;
	char	c;
	
	a = 'A';
	b = 'B';
	c = 'C';

	ft_line(x, a, b);
	height = 0;
	while(height < y - 2){
		ft_line(x, b, ' ');
		height++;
	}
	if(y >= 2)
		ft_line(x, c, b);
}
