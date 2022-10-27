/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 15:55:04 by ggosse            #+#    #+#             */
/*   Updated: 2022/10/27 19:37:23 by ggosse           ###   ########.fr       */
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
# include "libft/libft.h"
# include "color.h"

// typedef struct s_list
// {
// 	int				nbr;
// 	struct s_list	*next;
// }					t_list;

void	ft_error(void);

void	ft_check_args(char **argv);
void	ft_check_dup(char **argv);
void	ft_check(char **argv);

void	ft_index(t_list **lst);
void	ft_init_pos_initial(t_list **lst);
void	ft_init_list(t_list	**stack_a, char **argv);

// moves
void	ft_swap_a(t_list **stack_a);
void	ft_swap_b(t_list **stack_b);
void	ft_push_b(t_list **stack_a, t_list **stack_b);
void	ft_push_a(t_list **stack_a, t_list **stack_b);

void	ft_print_list(t_list **lst);
void	ft_print_a(t_list **lst);
void	ft_print_b(t_list **lst);

#endif