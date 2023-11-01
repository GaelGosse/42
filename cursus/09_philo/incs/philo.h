/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_philo.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 20:57:26 by gael              #+#    #+#             */
/*   Updated: 2023/04/17 18:25:42 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PHILO_H
# define FT_PHILO_H

# include <dirent.h>
# include <errno.h>
# include <fcntl.h>
# include <limits.h>
# include <pthread.h>
# include <sys/types.h>
# include <sys/time.h>
# include <sys/resource.h>
# include <sys/wait.h>
# include <sys/stat.h>
# include <sys/ioctl.h>
# include <signal.h>
# include <stdarg.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <termios.h>
# include <unistd.h>
# include <readline/readline.h>
# include <readline/history.h>

// ------------------------------ include ----------------------------------- //
#include "color.h"
// ---------------------------- end include --------------------------------- //

// ------------------------------ define ------------------------------------ //
# define SUCCESS 0
# define FAIL 1
// ---------------------------- end define ---------------------------------- //

// ------------------------------ struct ------------------------------------ //

typedef struct philo
{
	int				id_philo;
	int				die_time;
	int				eat_time;
	int				sleep_time;
	int				cycles;
	int				nbr_meal;
	long long		last_eat;
	int				align_eat;
	int				fork_l;
	int				fork_r;
	pthread_t		id_thrd;
	struct s_table	*table;
}					t_philo;

typedef struct s_table
{
	int				nbr_of_philo;
	int				die_time;
	int				eat_time;
	int				sleep_time;
	int				cycles;
	int				dead;
	int				act_cycle;
	int				end_cycle;
	long long		start_time;
	pthread_t		main_thrd;
	pthread_mutex_t	mtx_end_cycle;
	pthread_mutex_t	mtx_last_eat;
	pthread_mutex_t	mtx_print;
	pthread_mutex_t	mtx_end;
	pthread_mutex_t	mtx_die;
	pthread_mutex_t	mtx_eat;
	pthread_mutex_t	mtx_fork[200];
	t_philo			philos[200];
}					t_table;
// ---------------------------- end struct ---------------------------------- //

//dinner.c
int			check_all(t_philo *philo);
int			eat_left(t_philo *philo);
int			eat_right(t_philo *philo);
int			only_philo(t_philo *philo);
void		*start_routine(void *arg);
//init.c
int			check_arg(int argc, char **argv);
int			ft_parsing(int argc, char **argv, t_table *table);
int			init_mutex(t_table *table);
int			init_philos(t_table *table);
//if_mtx.c
int			is_all_satiated(t_philo *philo);
int			is_dead(t_philo *philo);
int			is_end_cycle(t_philo *philo);
int			is_starve(t_philo *philo, long long time_ago);
void		print_mtx(t_philo *philo, char *msg);
//philo.c
int			ft_usleep(t_philo *philo, int ref);
long long	get_time(void);
int			odd_dinner(t_table *table);
void		*start_dinner(t_table *table);
//about_death.c
void		confirm_death(t_philo *philo);
void		end_or_dead(t_table *table);
//utils.c
void		destroy_mtx(t_table *table);
void		finish(t_table *table);
int			ft_atoi(const char *str);
int			ft_isspace(int chr);
int			ft_strlen(char *str);

#endif