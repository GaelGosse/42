/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 18:05:55 by ggosse            #+#    #+#             */
/*   Updated: 2022/11/30 19:10:06 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_check_args(char **argv)
{
	int	ite_args;
	int	ite_arg;

	ite_arg = 0;
	ite_args = 1;
	while (argv[ite_args])
	{
		ite_arg = 0;
		if ((argv[ite_args][ite_arg + 1] == '\0') &&
		(argv[ite_args][ite_arg] == '-' || argv[ite_args][ite_arg] == '+'))
			ft_error();
		if (ft_isdigit(argv[ite_args][ite_arg]) == 0 &&
		(argv[ite_args][ite_arg] != '-' && argv[ite_args][ite_arg] != '+'))
			ft_error();
		ite_arg++;
		while (argv[ite_args][ite_arg])
		{
			if (ft_isdigit(argv[ite_args][ite_arg]) == 0 ||
			(argv[ite_args][ite_arg] == '-' || argv[ite_args][ite_arg] == '+'))
				ft_error();
			ite_arg++;
		}
		ite_args++;
	}
}

// void	ft_check_args(char **argv)
// {
// 	int	ite_args;
// 	int	ite_arg;

// 	ite_arg = 0;
// 	ite_args = 1;
// 	while (argv[ite_args])
// 	{
// 		ite_arg = 0;
// 		if (ft_isdigit(argv[ite_args][ite_arg]) == 0 &&
// 			(argv[ite_args][ite_arg] != '+' || argv[ite_args][ite_arg] != '-'))
// 			ft_error();
// 		ite_arg++;
// 		if ((argv[ite_args][ite_arg] == '+' || argv[ite_args][ite_arg] == '-')
// 			&& (argv[ite_args][ite_arg] == '\0'))
// 			ft_error();
// 		while (argv[ite_args][ite_arg])
// 		{
// 			if (ft_isdigit(argv[ite_args][ite_arg]) == 0 ||
// 			(argv[ite_args][ite_arg] == '+' || argv[ite_args][ite_arg] == '-'))
// 				ft_error();
// 			ite_arg++;
// 		}
// 		ite_args++;
// 	}
// }

void	ft_check_dup(char **argv)
{
	int	ite_big;
	int	ite_lil;
	
	ite_lil = 1;
	ite_big = 1;
	while (argv[ite_big])
	{
		ite_lil = 1;
		ft_atoi(argv[ite_big]);
		while (argv[ite_lil])
		{
			if (ite_lil != ite_big)
			{
				if (ft_atoi(argv[ite_lil]) == ft_atoi(argv[ite_big]))
					ft_error();
			}
			ite_lil++;
		}
		ite_big++;
	}
}

int	ft_is_sorted(t_list	**lst)
{
	int		not_sorted;
	t_list	*tmp;

	tmp = (*lst);
	not_sorted = 0;
	while (tmp->next)
	{
		if (tmp->index > tmp->next->index)
			not_sorted = 1;
		tmp = tmp->next;
	}
	if (not_sorted == 1)
		return (0);
	else
		return (1);
}

int	ft_check(char **argv)
{
	int	ite_sorted;
	int	already_sorted;

	ite_sorted = 1;
	already_sorted = 1;
	ft_check_args(argv);
	ft_check_dup(argv);
	while (argv[ite_sorted + 1])
	{
		if (ft_atoi(argv[ite_sorted]) > ft_atoi(argv[ite_sorted + 1]))
			already_sorted = 0;
		ite_sorted++;
	}
	if (already_sorted == 1)
		return (0);
	(void)ite_sorted;
	(void)already_sorted;
	return (1);
}
/*
	ite_args = 1;
	while (argv[ite_args])
	{	
		printf("argv[i]: %s\n", argv[ite_args]);
		ite_args++;
	}
*/
