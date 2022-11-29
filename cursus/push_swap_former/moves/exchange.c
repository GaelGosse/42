/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exchange.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 15:58:11 by ggosse            #+#    #+#             */
/*   Updated: 2022/11/12 16:09:51 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

void	ft_exchange_a(t_list **stack_a)
{
	ft_rra(stack_a);
	ft_sa(stack_a);
	ft_ra(stack_a);
}

void	ft_exchange_b(t_list **stack_b)
{
	ft_rrb(stack_b);
	ft_sb(stack_b);
	ft_rb(stack_b);
}
