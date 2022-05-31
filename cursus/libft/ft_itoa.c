/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gael <gael@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 15:20:36 by ggosse            #+#    #+#             */
/*   Updated: 2022/05/31 13:33:00 by gael             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <limits.h>

static int	num_len(int nbr)
{
	int	len;

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
	char	*str;
	size_t	len;
	size_t	sign;

	sign = 0;
	len = num_len(nbr);
	if (nbr == -2147483648)
		return ("-2147483648");
	// if (nbr == 2147483647)
	// 	return ("2147483647");
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	if (nbr < 0)
	{
		nbr *= -1;
		str[0] = '-';
		sign = 1;
	}
	str[len] = '\0';
	len--;
	// printf("sign %li for %c%i\n", sign, str[0], nbr);
	// printf("len %li \n", len);
	while (len >= sign)
	{
		if (len > 20)
			break;
		str[len] = nbr % 10 + '0';
		// printf("len:%li str[i]:%c\n", len, str[len]);
		nbr /= 10;
		len--;
	}
	return (str);
}


int	main(void)
{
	printf(" --- res: %s \n\n", ft_itoa(-2147483648));
	printf(" --- res: %s \n\n", ft_itoa(0));
	printf(" --- res: %s \n\n", ft_itoa(12597));
	printf(" --- res: %s \n\n", ft_itoa(-12597));
	printf(" --- res: %s \n\n", ft_itoa(1));
	printf(" --- res: %s \n\n", ft_itoa(-1));
	return (0);
}
/*

static char	*wrte_neg(char *str, int n, int len)
{
	while (len > 0)
	{
		str[len] = n % 10 + '0';
		n = n / 10;
		len--;
	}
	return (str);
}

static char	*wrte_pos(char *str, int n, int len)
{
	while (len >= 0)
	{
		str[len] = n % 10 + '0';
		n = n / 10;
		len--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char		*str;
	long int	len;

	if (n == -2147483648)
	{
		return ("-2147483648");
	}
	len = num_len(n);
	str = (char *)malloc((len +1) * sizeof(char));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (n < 0)
	{
		n *= -1;
		str[0] = '-';
	}
	len--;
	if (str[0] == '-')
		return (wrte_neg(str, n, len));
	else
		return (wrte_pos(str, n, len));
}
*/
