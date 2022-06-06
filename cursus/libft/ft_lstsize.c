/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gael <gael@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 16:13:08 by gael              #+#    #+#             */
/*   Updated: 2022/06/06 10:17:18 by gael             ###   ########.fr       */
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

int ft_lstsize(t_list *lst)
{
    int		i;
	t_list	tmp;

	tmp = lst;
    i = 0;
	while (tmp != NULL)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}