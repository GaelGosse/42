/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 18:05:55 by ggosse            #+#    #+#             */
/*   Updated: 2022/10/16 17:56:19 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void ft_check_args(int argc, char **argv)
{
	(void)argc;
	int ite_args;
	int ite_arg;

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
		while(argv[ite_args][ite_arg])
		{
			if (ft_isdigit(argv[ite_args][ite_arg]) == 0 ||
			(argv[ite_args][ite_arg] == '+' || argv[ite_args][ite_arg] == '-')) 
				ft_error();
			ite_arg++;
		}
		ite_args++;
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