/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_philo.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gael <gael@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 15:51:05 by ggosse            #+#    #+#             */
/*   Updated: 2023/02/12 00:54:05 by gael             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_philo.h"

enum e_args{nbr_of_philo=NULL,die_time=NULL,eat_time=NULL,sleep_time=NULL,cycles=NULL}

void	ft_test(char *str)
{
	if (str)
		printf("str: %s\n", str);
}

int	main(int argc, char **argv){
	enum e_args	args;
	
	// if (argc == 5 || argc == 6)
	// {

	// }
	(void)argc;
	(void)argv;
}
