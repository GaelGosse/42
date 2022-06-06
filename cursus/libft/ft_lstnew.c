/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gael <gael@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 15:47:30 by gael              #+#    #+#             */
/*   Updated: 2022/06/06 09:40:31 by gael             ###   ########.fr       */
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

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (content != NULL)
		(*new).content = content;
	else
		(*new).content = NULL;
	(*new).next = NULL;
	return (new);
}
