/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 15:55:04 by ggosse            #+#    #+#             */
/*   Updated: 2022/10/17 18:33:04 by ggosse           ###   ########.fr       */
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

typedef struct p_list
{
	int				*nbr;
	struct	p_list	*next;
}					r_list;

void	ft_init_list(int argc, char **argv);
void	ft_check_args(int argc, char **argv);
void	ft_error(void);

#endif