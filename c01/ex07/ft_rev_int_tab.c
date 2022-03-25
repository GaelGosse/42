/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 12:37:26 by ggosse            #+#    #+#             */
/*   Updated: 2022/03/23 12:49:21 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	asc;
	int	desc;

	asc = 0;
	desc = size - 1;
	while (asc < size / 2)
	{
		ft_swap(&tab[asc], &tab[desc]);
		asc++;
		desc--;
	}
}
