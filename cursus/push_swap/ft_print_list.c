#include "ft_push_swap.h"

void	ft_print_list(t_list **lst)
{
	while (*lst)
	{
		printf("(*lst)->nbr: %i\n", (*lst)->nbr);
		(*lst) = (*lst)->next;
	}
}