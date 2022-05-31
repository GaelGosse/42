/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 15:20:36 by ggosse            #+#    #+#             */
/*   Updated: 2022/05/31 17:33:52 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
// #include <string.h>
// #include <ctype.h>
// #include <stdlib.h>

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

char	*ft_itoa(int nbr)
{
	char		*str;
	long int	len;
	long int	sign;
	long int	nb;

	sign = 0;
	len = num_len(nbr);
	nb = nbr;
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	if (nb < 0)
	{
		nb *= -1;
		str[0] = '-';
		sign = 1;
	}
	str[len] = '\0';
	len--;
	while (len >= sign)
	{
		if (len > 20)
			break;
		str[len] = nb % 10 + '0';
		nb /= 10;
		len--;
	}
	return (str);
}


// int	main(void)
// {
// 	printf(" --- res: %s \n\n", ft_itoa(-2147483648));
// 	printf(" --- res: %s \n\n", ft_itoa(0));
// 	printf(" --- res: %s \n\n", ft_itoa(12597));
// 	printf(" --- res: %s \n\n", ft_itoa(-12597));
// 	printf(" --- res: %s \n\n", ft_itoa(1));
// 	printf(" --- res: %s \n\n", ft_itoa(-1));
// 	return (0);
// }