/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gael <gael@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 16:11:37 by gael              #+#    #+#             */
/*   Updated: 2022/06/06 10:14:44 by gael             ###   ########.fr       */
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

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	tmp = lst;
	while (tmp != NULL)
	{
		lst = lst->next;
	}
}