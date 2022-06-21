/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_low.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 16:27:29 by ggosse            #+#    #+#             */
/*   Updated: 2022/06/21 19:20:24 by ggosse           ###   ########.fr       */
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
	char	*res;

	base = malloc(sizeof(char) * (16 + 1));
	if (!base)
	{
		return (NULL);
	}
	base = "0123456789abcdef";
	base[16] = '\0';
    res = malloc(sizeof(char) * (num_len(nbr) + 1));
    if (!res)
	{
        return (NULL);
	}
	if (nbr == -2147483648)
	{
		return (NULL);
	}
	if (nbr < 0 && nbr != -2147483648)
	{
		// ft_strchr_join(res, '-');
		nbr *= -1;
	}
	if (nbr < 10)
	{
		// ft_strchr_join(res, ft_itoa(nbr));
	}
	else
	{
		ft_putnbr_base_low(nbr / 16);
		// ft_strchr_join(res, base[nbr % 16], 1);
	}
	return (len);
}

// int main(){
// 	int i;

//     i = 19;
// 	printf("%s\n", ft_putnbr_base_low(i));
// }