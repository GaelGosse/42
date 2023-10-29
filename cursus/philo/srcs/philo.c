/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gael <gael@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 18:51:05 by gael              #+#    #+#             */
/*   Updated: 2023/05/14 00:38:53 by gael             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

long long	get_time(void)
{
	static struct timeval	tv;

	if (gettimeofday(&tv, NULL) == -1)
		return (FAIL);
	return ((tv.tv_sec * 1000) + (tv.tv_usec / 1000));
}

int	odd_dinner(t_table *table)
{
	int		i_odd;

	i_odd = -1;
	while (++i_odd < table->nbr_of_philo)
	{
		if (i_odd % 2 != 0)
		{
			if (pthread_create((&table->philos[i_odd].id_thrd), NULL, \
			start_routine, &(table->philos[i_odd])) != 0)
				return (FAIL);
		}
	}
	return (SUCCESS);
}

void	*start_dinner(t_table *table)
{
	int	i_even;

	table->start_time = get_time();
	i_even = -1;
	while (++i_even < table->nbr_of_philo)
	{
		if (i_even % 2 == 0)
		{
			if (pthread_create((&table->philos[i_even].id_thrd), NULL, \
			start_routine, &(table->philos[i_even])) != 0)
				return ((int *)FAIL);
		}
	}
	usleep(table->eat_time / 2 * 1000);
	if (odd_dinner(table))
		return ((int *)FAIL);
	end_or_dead(table);
	finish(table);
	return (table->philos);
}

int	ft_usleep(t_philo *philo, int ref)
{
	long int	milliseconds;
	long int	interval;
	long int	time;

	time = 0;
	milliseconds = get_time();
	while (is_dead(philo) == 0 && time < ref)
	{
		if (is_starve(philo, get_time()) != 0)
			return (1);
		interval = get_time();
		time = interval - milliseconds;
		usleep(50);
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	t_table	table;
	t_philo	*philos;

	if (check_arg(argc, argv) == FAIL \
	|| ft_parsing(argc, argv, &table) == FAIL || init_philos(&table) == FAIL \
	|| init_mutex(&table))
		return (FAIL);
	start_dinner(&table);
	(void)argc;
	(void)argv;
	(void)philos;
	(void)table;
}
