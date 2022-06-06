/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gael <gael@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 16:01:12 by gael              #+#    #+#             */
/*   Updated: 2022/06/06 09:40:43 by gael             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// /*
typedef struct  s_list
{
    void			*content;
    struct s_list	*next;
}					t_list;
// */

void ft_lstadd_front(t_list **lst, t_list *new)
{
	(*new).next = *lst;
}