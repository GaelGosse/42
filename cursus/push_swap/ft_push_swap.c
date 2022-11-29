/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 15:53:47 by ggosse            #+#    #+#             */
/*   Updated: 2022/11/29 21:21:07 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_error(void)
{
	ft_putstr_fd(BOLD_RED"Error\n"RESET, 1);
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

	tmp_a = (*stack_a);
	while ((*stack_a) && ft_lstsize(*stack_a) != 1)
	{
		(*stack_a) = tmp_a;
		while ((*stack_a)->next)
			(*stack_a) = (*stack_a)->next;
		printf(BACK_PURPLE"(*stack_a)->index: %i"RESET"\n", (*stack_a)->index);
	}
	// free(stack_a);
	free(stack_b);
}

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	(void)stack_b;
	if (argc == 1)
		return (0);
	ft_check(argv);

	(void)stack_a;



	// ------------- INIT -------------
	ft_init_list(&stack_a, argv);
	ft_init_act_pos(&stack_a);
	ft_index(&stack_a);
	// ft_print_a(&stack_a);


	

	// ------------- SORT -------------
	// ft_print_lists(&stack_a, &stack_b);
	
	ft_sort(argc, &stack_a, &stack_b);
	// printf(BACK_RED"end"RESET"\n");

	ft_print_lists(&stack_a, &stack_b);
	ft_free(&stack_a, &stack_b);
	// printf(BACK_RED"ft_is_sorted(&stack_a): %i"RESET"\n", ft_is_sorted(&stack_a));

	

	// printf("\n ------------------------------------------------------------------ \n");
	// printf("\n");
}
