/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 16:29:56 by ggosse            #+#    #+#             */
/*   Updated: 2023/01/09 18:11:41 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../color.h"

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

int	num_len(int nbr)
{
	int len = 1;
	int tmp = nbr;
	
	if (nbr < 0)
	{
		tmp *= -1;
		len++;
	}
	
	while (tmp > 10)
	{
		tmp /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int nbr)
{
	int		num_modulo;
	int		num_tmp;
	char	*str;

	num_modulo = nbr;
	num_tmp = nbr;
	if (nbr >= 2147483647)
		return (str = "2147483647", str);
	else if (nbr <= -2147483648)
		return (str = "-2147483648", str);
	str = malloc(sizeof(char) * (num_len(nbr) + 1));
	if (!str)
		return (NULL);
	if (nbr < 0)
	{
		str[0] = '-';
		nbr *= -1;
		num_modulo *= -1;
	}
	while (num_tmp > 10)
	{
		num_modulo = num_tmp;
		num_modulo /= 10;
		num_modulo *= 10;
		printf(PURPLE"num_modulo: %i"RESET"\n", num_modulo);
		num_tmp /= 10;
	}
	
	num_modulo /= 10;
	num_modulo *= 10;
	printf(CYAN"num_len(nbr): %i"RESET"\n", num_len(nbr));
	printf(RED"num_modulo 10: %i\n"RESET, nbr % num_modulo);
	printf(PURPLE"num_modulo: %i"RESET"\n", num_modulo);

	return (str);
	(void)num_len;
	(void)num_modulo;
}

int main(int argc, char **argv){
	char	*str;
	int		nbr;

	// nbr = -4;
	// printf("ft_itoa(nbr): %s\n\n", ft_itoa(nbr));

	// nbr = 0;
	// printf("ft_itoa(nbr): %s\n\n", ft_itoa(nbr));
	
	// nbr = 4;
	// printf("ft_itoa(nbr): %s\n\n", ft_itoa(nbr));
	
	nbr = 824;
	printf("ft_itoa(nbr): %s\n\n", ft_itoa(nbr));

	nbr = -936;
	printf("ft_itoa(nbr): %s\n\n", ft_itoa(nbr));

	nbr = -2147483648;
	printf("ft_itoa(nbr): %s\n\n", ft_itoa(nbr));

	nbr = 2147483647;
	printf("ft_itoa(nbr): %s\n\n", ft_itoa(nbr));

	(void)argc;
	(void)argv;
	(void)str;
	(void)nbr;
}