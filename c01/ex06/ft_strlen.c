/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 13:05:42 by ggosse            #+#    #+#             */
/*   Updated: 2022/03/18 13:26:28 by ggosse           ###   ########.fr       */
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

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	return (i);
}
int main()
{
	char	s[] = {"hello"};
	ft_putnbr(ft_strlen(s));
	ft_putchar('\n');
}
