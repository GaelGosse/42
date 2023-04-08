/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 15:51:05 by ggosse            #+#    #+#             */
/*   Updated: 2023/04/08 17:17:03 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_philo.h"

void	get_time(t_table *table)
{

	(void)table;
}

int	ft_parsing(int argc, char *argv[], t_table *table)
{
	if (argc == 5 || argc == 6)
	{
		table->start_time = time;
		table->nbr_of_philo = ft_atoi(argv[1]);
		table->die_time = ft_atoi(argv[2]);
		table->eat_time = ft_atoi(argv[3]);
		table->sleep_time = ft_atoi(argv[4]);
		if (argc == 6)
			table->cycles = ft_atoi(argv[5]);
		else
			table->cycles = FAIL;
		printf("%i\n", table->nbr_of_philo);
		printf("%i\n", table->die_time);
		printf("%i\n", table->eat_time);
		printf("%i\n", table->sleep_time);
		printf("%i\n", table->cycles);
		printf(PURPLE"time: %li"RESET"\n", (unsigned long)time);
	}
	else
		return (printf("wrong args\n"), FAIL);
	return (SUCCESS);
}

int	main(int argc, char *argv[])
{
	t_table	table;
	t_philo	*philos;
	printf(PURPLE"time: %li"RESET"\n", (unsigned long)time);

	if (ft_parsing(argc, argv, &table))
		return (FAIL);
	(void)argc;
	(void)argv;
	(void)philos;
	(void)table;
}
