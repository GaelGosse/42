/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_philo.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 15:51:05 by ggosse            #+#    #+#             */
/*   Updated: 2023/02/12 18:42:41 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_philo.h"

void	ft_init_struct(t_table *table)
{
	table->nbr_of_philo = -1;
	table->die_time = -1;
	table->eat_time = -1;
	table->sleep_time = -1;
	table->cycles = -1;
}

int	ft_parsing(int argc, char *argv[], t_table *table)
{
	printf("argc: %i\n", argc);
	
	if (argc == 5 || argc == 6)
	{
		table->nbr_of_philo = ft_atoi(argv[1]);
		table->die_time = ft_atoi(argv[2]);
		table->eat_time = ft_atoi(argv[3]);
		table->sleep_time = ft_atoi(argv[4]);
		if (argc == 6)
			table->cycles = ft_atoi(argv[5]);
		printf("%i\n", table->nbr_of_philo);
		printf("%i\n", table->die_time);
		printf("%i\n", table->eat_time);
		printf("%i\n", table->sleep_time);
		printf("%i\n", table->cycles);
	}
	return (SUCCESS);
}

int	main(int argc, char *argv[])
{
	t_table	table;

	ft_init_struct(&table);
	ft_parsing(argc, argv, &table);
	(void)argc;
	(void)argv;
}
