/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 12:37:26 by ggosse            #+#    #+#             */
/*   Updated: 2022/03/23 12:50:10 by ggosse           ###   ########.fr       */
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

void	ft_sort_int_tab(int *tab, int size)
{
	int	global;
	int	inside;
	int	max;
	int	i_max;

	global = 0;
	inside = 0;
	max = tab[0];
	while (size > 0)
	{
		inside = 0;
		max = tab[0];
		while (inside < size)
		{
			if (tab[inside] >= max)
			{
				max = tab[inside];
				i_max = inside;
			}
			inside++;
		}
		ft_swap(&tab[size - 1], &tab[i_max]);
		size--;
		global++;
	}
}
