/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tools.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 01:14:19 by gael              #+#    #+#             */
/*   Updated: 2022/06/25 18:10:28 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

int	ft_putptr_hexa(long long int ptr)
{
	static int	len;

	if (!len)
		len = 0;
	if (ptr >= 16)
	{
		ft_putptr_hexa(ptr / 16);
		ft_putptr_hexa(ptr % 16);
	}
	else
	{
		if (ptr <= 9)
			ft_putchar_fd(ptr + '0', 1);
		else
		{
			ft_putchar_fd(ptr - 10 + 'a', 1);
			len++;
		}
	}
	return (len);
}

int	ft_putptr(long long int ptr)
{
	ft_putstr_fd("0x", 1);
	return (ft_putptr_hexa(ptr));
}

