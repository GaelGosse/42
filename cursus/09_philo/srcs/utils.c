/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gael <gael@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 19:12:21 by gael              #+#    #+#             */
/*   Updated: 2023/05/14 00:38:53 by gael             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	ft_strlen(char *str)
{
	long int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_isspace(int chr)
{
	if ((8 < chr && chr < 14) || chr == 32)
	{
		return (1);
	}
	return (0);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	res;

	i = 0;
	res = 0;
	sign = 1;
	while (ft_isspace(str[i]) == 1)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	if (res > INT_MAX)
		return (FAIL);
	return (res * sign);
}

void	finish(t_table *table)
{
	int	i_finish;

	i_finish = -1;
	while (++i_finish < table->nbr_of_philo)
		pthread_join(table->philos[i_finish].id_thrd, NULL);
	i_finish = -1;
	while (++i_finish < table->nbr_of_philo)
		pthread_mutex_destroy(&table->mtx_fork[i_finish]);
	destroy_mtx(table);
}

void	destroy_mtx(t_table *table)
{
	pthread_mutex_destroy(&table->mtx_end_cycle);
	pthread_mutex_destroy(&table->mtx_last_eat);
	pthread_mutex_destroy(&table->mtx_print);
	pthread_mutex_destroy(&table->mtx_end);
	pthread_mutex_destroy(&table->mtx_die);
	pthread_mutex_destroy(&table->mtx_eat);
}
