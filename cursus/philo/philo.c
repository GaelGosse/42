/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 15:51:05 by ggosse            #+#    #+#             */
/*   Updated: 2023/04/13 12:43:54 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_philo.h"

long long	get_time(void)
{
	long long				milli;
	static struct timeval	tv;

	if (gettimeofday(&tv, NULL)  == -1)
		return (0);
	milli = (tv.tv_sec + tv.tv_usec);
	return (milli);
}

void	init_philos(t_table *table)
{
	int		i_philos;
	t_philo	*human;

	i_philos = 0;
	while (i_philos < table->nbr_of_philo)
	{
		human = ft_lstnew_philo(table, i_philos + 1);
		if (table->philos == NULL)
		{
			table->philos = human;
			table->philos_head = table->philos;
		}
		else
			ft_lstadd_back(&table->philos, human);
		i_philos++;
	}
}

int	ft_parsing(int argc, char **argv, t_table *table)
{
	if (argc == 5 || argc == 6)
	{
		table->start_time = get_time();
		table->nbr_of_philo = ft_atoi(argv[1]);
		table->die_time = ft_atoi(argv[2]);
		table->eat_time = ft_atoi(argv[3]);
		table->sleep_time = ft_atoi(argv[4]);
		if (argc == 6)
			table->cycles = ft_atoi(argv[5]);
		else
			table->cycles = FAIL;
		table->philos = NULL;
		printf("nbr_of_philo: %i\n", table->nbr_of_philo);
		printf("die_time: %i\n", table->die_time);
		printf("eat_time: %i\n", table->eat_time);
		printf("sleep_time: %i\n", table->sleep_time);
		if (argc == 6)
			printf("cycles: %i\n", table->cycles);
		init_philos(table);
	}
	else
		return (printf("wrong args\n"), FAIL);
	return (SUCCESS);
}

int	main(int argc, char *argv[])
{
	t_table	table;
	t_philo	*philos;

	if (ft_parsing(argc, argv, &table))
		return (FAIL);
	(void)argc;
	(void)argv;
	(void)philos;
	(void)table;
}

// void	ft_usleep(int slp)
// {
// 	long long	tmp;
//
// 	tmp = get_time();
// 	while (get_time() < tmp + slp)
// 	{
// 		usleep(40);
// 	}
// }
