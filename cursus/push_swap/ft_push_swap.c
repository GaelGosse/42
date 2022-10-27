/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 15:53:47 by ggosse            #+#    #+#             */
/*   Updated: 2022/10/27 19:50:59 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_error(void)
{
	ft_putstr_fd(BOLD_RED"Error\n"RESET, 1);
	exit(1);
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
	ft_init_list(&stack_a, argv);

	
	
ft_init_pos_initial(&stack_a);
	ft_index(&stack_a); 
	
	printf(BOLD_WHITE"\nstack A"RESET);
	ft_print_a(&stack_a);
	printf(BOLD_WHITE"\nstack B"RESET);// printf("\n-----\n");
	ft_print_b(&stack_b);

ft_push_b(&stack_a, &stack_b);	

	printf(BOLD_WHITE"\nstack A"RESET);// printf("\n-----\n");
	ft_print_a(&stack_a);
	printf(BOLD_WHITE"\nstack B"RESET);// printf("\n-----\n");
	ft_print_b(&stack_b);

ft_push_b(&stack_a, &stack_b);

	printf(BOLD_WHITE"\nstack A"RESET);// printf("\n-----\n");
	ft_print_a(&stack_a);
	printf(BOLD_WHITE"\nstack B"RESET);// printf("\n-----\n");
	ft_print_b(&stack_b);

ft_push_b(&stack_a, &stack_b);

	printf(BOLD_WHITE"\nstack A"RESET);// printf("\n-----\n");
	ft_print_a(&stack_a);
	printf(BOLD_WHITE"\nstack B"RESET);// printf("\n-----\n");
	ft_print_b(&stack_b);


	printf("\n");
}





/*
std input   stdin   0 
std output  stdout  1
std error   stderr  2

exit
0     successful
1     minor error
2     major error
127   command not found



1 2 3 = nothing

1 3 2 = rra sa

2 1 3 = sa
2 3 1 = rra

3 1 2 = ra
3 2 1 = ra


*/