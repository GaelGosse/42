/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   if_mtx.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gael <gael@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 23:14:50 by gael              #+#    #+#             */
/*   Updated: 2023/05/14 00:38:53 by gael             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	is_end_cycle(t_philo *philo)
{
	pthread_mutex_lock(&philo->table->mtx_end_cycle);
	if (philo->table->end_cycle)
	{
		pthread_mutex_unlock(&philo->table->mtx_end_cycle);
		return (1);
	}
	pthread_mutex_unlock(&philo->table->mtx_end_cycle);
	return (0);
}

int	is_starve(t_philo *philo, long long time_ago)
{
	pthread_mutex_lock(&philo->table->mtx_eat);
	if (time_ago > philo->last_eat)
	{
		pthread_mutex_unlock(&philo->table->mtx_eat);
		return (1);
	}
	pthread_mutex_unlock(&philo->table->mtx_eat);
	return (0);
}

int	is_dead(t_philo *philo)
{
	pthread_mutex_lock(&(philo->table->mtx_die));
	if (philo->table->dead != 0)
	{
		pthread_mutex_unlock(&(philo->table->mtx_die));
		return (1);
	}
	pthread_mutex_unlock(&(philo->table->mtx_die));
	return (0);
}

int	is_all_satiated(t_philo *philo)
{
	pthread_mutex_lock(&philo->table->mtx_last_eat);
	if (philo->nbr_meal >= philo->table->cycles)
	{
		pthread_mutex_unlock(&philo->table->mtx_last_eat);
		return (1);
	}
	pthread_mutex_unlock(&philo->table->mtx_last_eat);
	return (0);
}

void	print_mtx(t_philo *philo, char *msg)
{
	if (is_end_cycle(philo) != 0)
		return ;
	pthread_mutex_lock(&philo->table->mtx_print);
	if (is_dead(philo) == 0)
		printf("%lli %i %s\n", get_time() - philo->table->start_time, \
	philo->id_philo, msg);
	pthread_mutex_unlock(&philo->table->mtx_print);
}
