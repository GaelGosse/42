/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 18:09:27 by ggosse            #+#    #+#             */
/*   Updated: 2022/10/17 18:21:58 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_init_list(int argc, char **argv)
{
	int ite_cv;

	(void)argc;

	ite_cv = 1;
	while (argv[ite_cv])
	{
		ft_atoi(argv[ite_cv]);
		// printf("ft_atoi(argv[ite_cv]): %li\n", ft_atoi(argv[ite_cv]));
		ite_cv++;
	}
}