/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 23:36:32 by ggosse            #+#    #+#             */
/*   Updated: 2022/03/29 23:52:54 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;
	int	res;

	i = 1;
	if (nb == 0)
		return (0);
	if (nb == 1)
		return (1);
	while (i < 46341)
	{
		res = i * i;
		if (res == nb)
			return (i);
		if (res > nb)
			return (0);
	}
	return (0);
}