/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 15:55:04 by ggosse            #+#    #+#             */
/*   Updated: 2022/10/20 18:05:15 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

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
void	ft_check(int argc, char **argv);

void	ft_init_list(t_list	**stack_a, char **argv);
void	ft_print_list(t_list **lst);

#endif