/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gael <gael@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 20:52:19 by gael              #+#    #+#             */
/*   Updated: 2023/05/14 00:38:53 by gael             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	check_arg(int argc, char **argv)
{
	int	i_check;

	i_check = 1;
	while (i_check < argc && argv[i_check])
	{
		if (ft_strlen(argv[i_check]) == 0 || ft_atoi(argv[i_check]) == -1)
			return (printf("something wrongn with args\n"), FAIL);
		if (ft_atoi(argv[i_check]) == 0)
			return (printf("case not handle\n"), FAIL);
		i_check++;
	}
	return (SUCCESS);
}

int	ft_parsing(int argc, char **argv, t_table *table)
{
	if (argc == 5 || argc == 6)
	{
		table->nbr_of_philo = ft_atoi(argv[1]);
		table->die_time = ft_atoi(argv[2]);
		table->eat_time = ft_atoi(argv[3]);
		table->sleep_time = ft_atoi(argv[4]);
		if (argc == 6)
			table->cycles = ft_atoi(argv[5]);
		else
			table->cycles = -1;
		if (table->nbr_of_philo > 200)
			printf("ERR: max philos is 200\n");
	}
	else
		return (printf("wrong args\n"), FAIL);
	return (SUCCESS);
}

int	init_philos(t_table *table)
{
	int		i_philos;

	i_philos = -1;
	while (++i_philos < table->nbr_of_philo)
	{
		table->philos[i_philos].id_philo = i_philos + 1;
		table->philos[i_philos].die_time = table->die_time;
		table->philos[i_philos].eat_time = table->eat_time;
		table->philos[i_philos].sleep_time = table->sleep_time;
		table->philos[i_philos].cycles = table->cycles;
		table->philos[i_philos].nbr_meal = 0;
		table->philos[i_philos].last_eat = get_time() + table->die_time;
		table->philos[i_philos].align_eat = 0;
		table->philos[i_philos].fork_l = i_philos;
		if (i_philos == 0)
			table->philos[i_philos].fork_r = table->nbr_of_philo - 1;
		else
			table->philos[i_philos].fork_r = i_philos - 1;
		table->philos[i_philos].table = table;
		printf("id: %i \n\n", table->philos[i_philos].id_philo);
		printf("fork_l %i \n", table->philos[i_philos].fork_l);
		printf("fork_r %i \n", table->philos[i_philos].fork_r);
	}
	return (SUCCESS);
}

int	init_mutex(t_table *table)
{
	int	i_fork;

	i_fork = -1;
	while (++i_fork < table->nbr_of_philo)
	{
		if (pthread_mutex_init(&table->mtx_fork[i_fork], NULL) != 0)
			return (printf("failed during init mutex\n"), FAIL);
	}
	if (pthread_mutex_init(&table->mtx_print, NULL) != 0)
		return (printf("failed during init mutex\n"), FAIL);
	if (pthread_mutex_init(&table->mtx_eat, NULL) != 0)
		return (printf("failed during init mutex\n"), FAIL);
	if (pthread_mutex_init(&table->mtx_end, NULL) != 0)
		return (printf("failed during init mutex\n"), FAIL);
	if (pthread_mutex_init(&table->mtx_die, NULL) != 0)
		return (printf("failed during init mutex\n"), FAIL);
	return (SUCCESS);
}