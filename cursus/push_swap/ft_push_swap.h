/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 15:55:04 by ggosse            #+#    #+#             */
/*   Updated: 2022/12/13 12:06:22 by ggosse           ###   ########.fr       */
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

typedef struct s_list
{
	int				nbr;
	int				index;
	int				act_pos;
	int				target_pos;
	int				cost_a;
	int				cost_b;
	int				final_cost;
	struct s_list	*next;
}					t_list;

// ft_check.c
void		ft_check_args(char **argv);
void		ft_check_dup(char **argv);
int			ft_is_sorted(t_list	**lst);
int			ft_check(char **argv);
int			ft_isspace(int chr);

// ft_cost.c
void		ft_target_pos(t_list **stack_a, t_list **stack_b);
void		ft_cost_a_b(t_list **stack_a, t_list **stack_b);
void		ft_final_cost(t_list **stack_a, t_list **stack_b);
int			ft_find_lowest_cost(t_list **stack_b);
void		ft_update_cost(t_list **stack_a, t_list **stack_b);

// ft_index.c
long int	ft_atoi(const char *str);
t_list		*ft_lstnew(int nbr);
void		ft_lstadd_back(t_list **lst, t_list *new);
int			ft_lstsize(t_list *lst);

// ft_init_list.c
void		ft_init_list(t_list	**stack_a, char **argv);
void		ft_init_act_pos(t_list **lst);
void		ft_init_act_pos_both(t_list **stack_a, t_list **stack_b);
void		ft_index(t_list **lst);

// ft_push_swap.c
void		ft_error(void);
int			ft_abs(int nbr);
void		ft_free(t_list **stack_a, t_list **stack_b);
void		ft_sort_all(t_list **stack_a, t_list **stack_b, int size_a);

// ft_presort.c
int			ft_is_index_lt_median(t_list **lst, int quarter, int size_all);
void		ft_presort_first(t_list **stack_a, t_list **stack_b, int size_all);
void		ft_presort_sec(t_list **stack_a, t_list **stack_b, int size_all);
void		ft_presort(t_list **stack_a, t_list **stack_b, int size_a);

// ft_presort
void		ft_presort_small_first(t_list **stack_a, t_list **stack_b, int sz);
void		ft_presort_small_sec(t_list **stack_a, t_list **stack_b, int sz);

// ft_sort.c
void		ft_sort(int argc, t_list **stack_a, t_list **stack_b);
void		ft_sort_three(t_list **stack_a);
void		ft_exec_cost_b(t_list **stack_a, t_list **stack_b, t_list *tmp_b);
void		ft_exec_cost_a(t_list **stack_a, t_list **stack_b, t_list *tmp_b);
void		ft_re_organize(t_list **stack_a, int size_all);

// moves/ft_push.c
void		ft_pb(t_list **stack_a, t_list **stack_b);
void		ft_pa(t_list **stack_a, t_list **stack_b);

// moves/ft_swap.c
void		ft_sa(t_list **stack_a);
void		ft_sb(t_list **stack_b);

// moves/ft_reverse_rotate.c
void		ft_reverse_rotate_a(t_list **stack_a);
void		ft_reverse_rotate_b(t_list **stack_b);
void		ft_rra(t_list **stack_a);
void		ft_rrb(t_list **stack_b);
void		ft_rrr(t_list **stack_a, t_list**stack_b);

// moves/ft_rotate.c
void		ft_rotate_a(t_list **stack_a);
void		ft_rotate_b(t_list **stack_b);
void		ft_ra(t_list **stack_a);
void		ft_rb(t_list **stack_b);
void		ft_rr(t_list **stack_a, t_list**stack_b);

#endif