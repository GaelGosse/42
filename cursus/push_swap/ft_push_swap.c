/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 15:53:47 by ggosse            #+#    #+#             */
/*   Updated: 2022/10/17 18:30:48 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void ft_error(void)
{
	// free list 
	ft_putstr_fd(bold_red"Error\n"reset, 1);
	exit(1);
}

int main(int argc, char **argv){
	char	*str;

	(void)argc;
	(void)str;

	ft_check_args(argc, argv);
	ft_init_list(argc, argv);
	printf("\n");
}

/*
std input   stdin   0 
std output  stdout  1
std error   stderr  2

exit
0     successful
1     minor error
2     major error
127   command not found
*/