/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 17:04:47 by ggosse            #+#    #+#             */
/*   Updated: 2022/03/29 22:30:04 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	res;
	int	i;

	i = 2;
	res = 1;
	if (nb < 0)
		return (0);
	if ((nb == 0) || (nb == 1))
		return (1);
	while(i <= nb)
	{
		res = res * i;
		i++;
	}	
	return (res);	
}

int	main()
{
	printf("%i\n", ft_iterative_factorial(8));
	return (0);
}
