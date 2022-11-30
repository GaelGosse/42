/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 15:55:04 by ggosse            #+#    #+#             */
/*   Updated: 2022/11/30 16:09:27 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUSH_SWAP_H
# define FT_PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <ctype.h>
# include <string.h>
# include <stddef.h>
# include <limits.h>
# include "libft/libft.h"
# include "color.h"

// typedef struct s_list
// {
// 	int				nbr;
// 	struct s_list	*next;
// }					t_list;




// ANCHOR ----- CHECK -----
void	ft_error(void);

void	ft_check_args(char **argv);
void	ft_check_dup(char **argv);
int		ft_check(char **argv);

int		ft_is_sorted(t_list	**lst);






// ANCHOR ------ INIT -------
void	ft_index(t_list **lst);
void	ft_init_act_pos(t_list **lst);
void	ft_init_act_pos_both(t_list **stack_a, t_list **stack_b);
void	ft_init_list(t_list	**stack_a, char **argv);

//ANCHOR ----- COST -----
void	ft_update_cost(t_list **stack_a, t_list **stack_b);
void	ft_cost_a_b(t_list **stack_a, t_list **stack_b);
void	ft_final_cost(t_list **stack_a, t_list **stack_b);
int		ft_abs(int nbr);





// ANCHOR ----- MOVES -----
void	ft_sa(t_list **stack_a);
void	ft_sb(t_list **stack_b);
void	ft_pb(t_list **stack_a, t_list **stack_b);
void	ft_pa(t_list **stack_a, t_list **stack_b);

// prepare
void	ft_rotate_a(t_list **stack_a);
void	ft_rotate_b(t_list **stack_b);
void	ft_reverse_rotate_a(t_list **stack_a);
void	ft_reverse_rotate_b(t_list **stack_b);

// real
void	ft_ra(t_list **stack_a);
void	ft_rb(t_list **stack_b);
void	ft_rr(t_list **stack_a, t_list**stack_b);
void	ft_rra(t_list **stack_a);
void	ft_rrb(t_list **stack_b);
void	ft_rrr(t_list **stack_a, t_list**stack_b);

// option
void	ft_exchange_a(t_list **stack_a);
void	ft_exchange_b(t_list **stack_b);






// ANCHOR ------ SORT ------
void	ft_sort(int argc, t_list **stack_a, t_list **stack_b);
void	ft_sort_three(t_list **stack_a, t_list **stack_b);
void	ft_sort_five(t_list **stack_a, t_list **stack_b);
void	ft_pre_sort(t_list **stack_a, t_list **stack_b, int size_a);
void	ft_sort_all(t_list **stack_a, t_list **stack_b, int size_a);
int		ft_is_index_lt_median(t_list **lst, int quarter, int size_all);






// ANCHOR ----- PRINT ------ 
void	ft_print_a(t_list **lst);
void	ft_print_b(t_list **lst);
void	ft_print_list(t_list **lst);
void	ft_print_lists(t_list **stack_a, t_list **stack_b);






#endif