/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 18:05:55 by ggosse            #+#    #+#             */
/*   Updated: 2022/10/19 20:03:40 by ggosse           ###   ########.fr       */
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
		if (ft_isdigit(argv[ite_args][ite_arg]) == 0 &&
			(argv[ite_args][ite_arg] != '+' && argv[ite_args][ite_arg] != '-'))
			ft_error();
		ite_arg++;
		if ((argv[ite_args][ite_arg] == '+' || argv[ite_args][ite_arg] == '-')
			&& (argv[ite_args][ite_arg] == '\0'))
			ft_error();
		while (argv[ite_args][ite_arg])
		{
			if (ft_isdigit(argv[ite_args][ite_arg]) == 0 ||
			(argv[ite_args][ite_arg] == '+' || argv[ite_args][ite_arg] == '-'))
				ft_error();
			ite_arg++;
		}
		ite_args++;
	}
}

void	ft_check_dup(char **argv)
{
	int ite_dup;

	ite_dup = 0;
	while (argv[ite_dup])
	{
		
	}
}

/*
	ite_args = 1;
	while (argv[ite_args])
	{	
		printf("argv[i]: %s\n", argv[ite_args]);
		ite_args++;
	}
*/

// TODO if no arg or already sorted => return nothing
// TODO duplicate numbers
// void	ft_is_sorted(int argc, char **argv)
// {
// }