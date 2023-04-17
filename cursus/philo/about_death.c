/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   about_death.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 18:40:31 by gael              #+#    #+#             */
/*   Updated: 2023/04/17 17:39:49 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_philo.h"

void	confirm_death(t_philo *philo)
{
	print_mtx(philo, BOLD_RED"died"RST);
	pthread_mutex_lock(&(philo->table->mtx_die));
	philo->table->dead = 1;
	pthread_mutex_unlock(&(philo->table->mtx_die));
}

void	end_or_dead(t_table *table)
{
	int	i_dead;

	while (is_end_cycle(&table->philos[0]) == 0)
	{
		i_dead = 0;
		while (i_dead < table->nbr_of_philo && is_dead(&table->philos[0]) == 0)
		{
			usleep(100);
			if (is_starve(&table->philos[i_dead], get_time()) != 0)
				confirm_death(&table->philos[i_dead]);
			i_dead++;
		}
		if (is_dead(&table->philos[0]) != 0)
			break ;
		i_dead = 0;
		while (i_dead < table->nbr_of_philo && is_all_satiated(&table->philos[i_dead]))
			i_dead++;
		if (i_dead == table->nbr_of_philo && table->cycles > 0)
		{
			pthread_mutex_lock(&table->mtx_end_cycle);
			table->end_cycle = 1;
			pthread_mutex_unlock(&table->mtx_end_cycle);
		}
	}
}
