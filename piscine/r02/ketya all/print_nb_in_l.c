/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_nb_in_l.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kportela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 15:34:48 by kportela          #+#    #+#             */
/*   Updated: 2022/03/26 19:31:40 by kportela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_recursive_power(int nb, int power);
int	ft_atoi(char *str);

#include <stdio.h>


char *recup_l()

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

void	print_hundred(unsigned int nb, char *buffer)
{
	if (100 <= nb && nb < 1000)
        {
                ft_putstr(recup_l(nb / 100));
                ft_putchar(' ');
                nb %= 100;
        }
	if (0 <= nb && nb < 20)
                ft_putstr(recup_l(nb));
        else if (20 <= nb && nb < 100)
        {
                ft_putstr(dict[(nb / 10) * 10]);
                if (nb % 10 != 0)
                {
                        ft_putchar('-');
                        ft_putstr(dict[nb % 10]);
                }
        }
}

void	print_nb_in_l(char *str, int size, char *buffer)
{
        int power;
        int n;
        int nb;
        int l;
        char *dest;

        l = str_len(str);
	if (0 < size && size < 4)
	{
                nb = ft_atoi(str);
		print_hundred(nb, buffer);
	}
	else
        {
                power = (size / 3) * 3;
                n = ft_recursive_power(10, power);
                nb = ft_atoi(ft_strncpy(dest, str + l - size, 3));
                print_hundred(nb / n, buffer);
                ft_putchar(' ');
                ft_putstr(recup_l(n));
                ft_putchar(' ');
                print_nb_in_l(str + 3 + l - size, size - 3, buffer);
        }	
}