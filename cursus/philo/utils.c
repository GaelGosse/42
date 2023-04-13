/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 12:12:21 by ggosse            #+#    #+#             */
/*   Updated: 2023/04/13 17:34:17 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_philo.h"

t_philo	*ft_lstnew_philo(t_table *table, int i_philo)
{
	t_philo	*new;

	new = malloc(sizeof(t_philo));
	if (!new)
		return (NULL);
	new->id_philo = i_philo;
	new->die_time = table->die_time;
	new->eat_time = table->eat_time;
	new->sleep_time = table->sleep_time;
	new->cycles = FAIL;
	new->thrd = NULL;
	new->next = NULL;
	printf(GREEN"new->id_philo: %i"RESET"\n", new->id_philo);
	printf(GREEN"new->die_time: %i"RESET"\n", new->die_time);
	printf(GREEN"new->eat_time: %i"RESET"\n", new->eat_time);
	printf(GREEN"new->sleep_time: %i"RESET"\n", new->sleep_time);
	printf("\n");
	return (new);
}

void	ft_lstadd_back(t_philo **lst, t_philo *new)
{
	t_philo	*tmp;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	tmp = *lst;
	while (tmp->next)
	{
		tmp = tmp->next;
	}
	tmp->next = new;
}

static int	ft_isspace(int chr)
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
	return (res * sign);
}
