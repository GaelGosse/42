/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 16:12:48 by ggosse            #+#    #+#             */
/*   Updated: 2022/06/09 17:22:23 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
	t_list	*last;
		
	if (!lst)
		return (0);
	last = lst;
	while (last->next)
	{
		if (last->next != NULL)
			last = last->next;
	}
	return (last);
}


/*
void print(t_list *list)
{
	t_list *tmp = list;	

	printf("\n--------------\n\n");
	while (tmp->next)
	{
		printf("%s\n", (char *)tmp->content);
		tmp = tmp->next;
	}
	printf("\n--------------\n\n");
}

int main(void)
{
	t_list *list;

	list = ft_lstnew((char *){"str"});
	printf("%s\n", (char *)list->content);
	printf("\n--------------\n\n");

	for (size_t i = 0; i < 10; i++)
	{
		t_list *l = ft_lstnew((char *){"42"});
		ft_lstadd_back(&list, l);
	}
	print(list);
	t_list *l = ft_lstnew((char *){"43"});
	ft_lstadd_front(&list, l);
	l = ft_lstnew((char *){"44"});
	ft_lstadd_back(&list, l);
	print(list);
	printf("Size: %d\n", ft_lstsize(list));
	printf("Last: %s\n", (char *)ft_lstlast(list)->content);
	ft_lstlast(list)->next =  ft_lstnew((char *){"45"});

	printf("Last: %s\n", (char *)ft_lstlast(list)->content);
	printf("\n--------------\n\n");
}
*/