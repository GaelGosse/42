/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dinner.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gael <gael@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 17:56:39 by gael              #+#    #+#             */
/*   Updated: 2023/04/17 03:27:52 by gael             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_philo.h"

int	only_philo(t_philo *philo)
{
	pthread_mutex_lock(&philo->table->mtx_last_eat);
	philo->last_eat = (philo->table->start_time + (long long)philo->table->die_time);
	pthread_mutex_unlock(&philo->table->mtx_last_eat);
	if (philo->table->nbr_of_philo == 1)
		return (usleep(philo->die_time), 1);
	if (philo->table->end_cycle == 1)
	{
		if (philo->align_eat <= 0)
			return (FAIL);
	}
	return (SUCCESS);
}

int	check_all(t_philo *philo)
{
	if (is_dead(philo) == FAIL)
		return (FAIL);
	if (is_starve(philo, get_time()) == FAIL)
		return (FAIL);
	if (is_end_cycle(philo) == FAIL)
		return (FAIL);
	if (philo->table->end_cycle == 1 && philo->nbr_meal >= philo->table->act_cycle)
		return (FAIL);
	return (SUCCESS);
}

void	*start_routine(void *arg)
{
	t_philo	*philo;

	philo = (t_philo *)arg;
	if (only_philo(philo) == FAIL)
		return ((int *)FAIL);
	while (1)
	{
		if (check_all(philo) == FAIL)
			return ((int *)FAIL);
		if (philo->table->nbr_of_philo % 2 == 0)
			eat_left(philo);
		else
			eat_right(philo);
		if (check_all(philo) == FAIL)
			return ((int *)FAIL);
		print_mtx(philo, "is sleeping");
		usleep(philo->sleep_time);
		print_mtx(philo, "is thinking");
		if (philo->table->nbr_of_philo == philo->id_philo && (philo->table->nbr_of_philo % 2) != 0)
			usleep(philo->table->eat_time);
		else if ((philo->table->nbr_of_philo % 2) != 0)
			usleep(philo->table->eat_time / 2);
		printf("\n.....................................\n\n");
	}
}

void	eat_left(t_philo *philo)
{
	pthread_mutex_lock(&philo->table->mtx_fork[philo->fork_l]);
	pthread_mutex_lock(&philo->table->mtx_fork[philo->fork_r]);

	print_mtx(philo, "has taken a fork");
	print_mtx(philo, "has taken a fork");
	print_mtx(philo, "is eating");

	pthread_mutex_lock(&philo->table->mtx_eat);
	philo->nbr_meal++;
	pthread_mutex_unlock(&philo->table->mtx_eat);
	pthread_mutex_lock(&philo->table->mtx_last_eat);
	philo->last_eat = get_time() + philo->table->die_time;
	pthread_mutex_unlock(&philo->table->mtx_last_eat);

	usleep(philo->table->eat_time);
	pthread_mutex_unlock(&philo->table->mtx_fork[philo->fork_l]);
	pthread_mutex_unlock(&philo->table->mtx_fork[philo->fork_r]);
}

void	eat_right(t_philo *philo)
{
	pthread_mutex_lock(&philo->table->mtx_fork[philo->fork_r]);
	pthread_mutex_lock(&philo->table->mtx_fork[philo->fork_l]);

	print_mtx(philo, "has taken a fork");
	print_mtx(philo, "has taken a fork");
	print_mtx(philo, "is eating");

	pthread_mutex_lock(&philo->table->mtx_eat);
	philo->nbr_meal++;
	pthread_mutex_unlock(&philo->table->mtx_eat);
	pthread_mutex_lock(&philo->table->mtx_last_eat);
	philo->last_eat = get_time() + philo->table->die_time;
	pthread_mutex_unlock(&philo->table->mtx_last_eat);

	usleep(philo->table->eat_time);
	pthread_mutex_unlock(&philo->table->mtx_fork[philo->fork_r]);
	pthread_mutex_unlock(&philo->table->mtx_fork[philo->fork_l]);
}