/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 15:53:47 by ggosse            #+#    #+#             */
/*   Updated: 2022/11/30 16:34:19 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_error(void)
{
	ft_putstr_fd("Error\n", 1);
	exit(1);
}

int	ft_abs(int nbr)
{
	if (nbr < 0)
		nbr *= -1;
	return (nbr);
}

void	ft_free(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp_a;

	while (*stack_a)
	{
		tmp_a = (*stack_a)->next;
		free(*stack_a);
		(*stack_a) = tmp_a;
	}
	free(*stack_b);
}

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;

	stack_a = NULL;
	stack_b = NULL;


	if (argc == 1)
		return (0);
	// ft_check(argv);
	if (ft_check(argv) == 0)
		exit(0);

	ft_init_list(&stack_a, argv);
	ft_init_act_pos(&stack_a);
	ft_index(&stack_a);
	

	ft_sort(argc, &stack_a, &stack_b);
	ft_free(&stack_a, &stack_b);
	

	(void)stack_a;
	(void)stack_b;
}
