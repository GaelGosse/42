/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_index.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 15:53:47 by ggosse            #+#    #+#             */
/*   Updated: 2022/11/13 19:06:33 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_index(t_list **lst)
{
	t_list	*big;
	t_list	*lil;
	int		index;

	index = 1;
	lil = (*lst);
	big = (*lst);
	while (big)
	{
		lil = (*lst);
		index = 1;
		while (lil)
		{
			if (lil->nbr != big->nbr)
			{
				if (big->nbr > lil->nbr)
					index++;
			}
			(lil) = (lil)->next;
		}
		big->index = index;
		(big) = (big)->next;
	}
}
