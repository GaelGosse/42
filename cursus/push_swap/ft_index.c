/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_index.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 15:53:47 by ggosse            #+#    #+#             */
/*   Updated: 2022/10/21 14:40:42 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ft_push_swap.h"

void	ft_index(t_list **lst)
{
	t_list	*big;
	t_list	*lil;
	int		index; 

	index = 0;
	lil = (*lst);
	big = (*lst);
	while (big)
	{
		lil = (*lst);
		index=0;
		while (lil)
		{
			if (lil->nbr != big->nbr)
			{
				if (big->nbr > lil->nbr)
					index++;
				// printf(PURPLE"(lil)->nbr: %i\n"RESET, (lil)->nbr);
				// printf(BOLD_PURPLE"(big)->nbr: %i\n\n"RESET, (big)->nbr);
			}
			(lil) = (lil)->next;
		}
		big->index = index;
		// printf(BACK_GREEN" ----- "RESET"\n\n");
		(big) = (big)->next;
	}
}
