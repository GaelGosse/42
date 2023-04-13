/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_philo.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 20:57:26 by ggosse            #+#    #+#             */
/*   Updated: 2023/04/13 17:35:07 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PHILO_H
# define FT_PHILO_H

# include <dirent.h>
# include <errno.h>
# include <fcntl.h>
# include <limits.h>
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
# define SUCCESS 1
# define FAIL -1
// ---------------------------- end define ---------------------------------- //

// ------------------------------ struct ------------------------------------ //

typedef struct philo
{
	int				id_philo;
	int				die_time;
	int				eat_time;
	int				sleep_time;
	int				cycles;
	pthread_t		*thrd;
	pthread_mutex_t	mtx_fork;
	pthread_mutex_t	mtx_print;
	pthread_mutex_t	mtx_eat;
	pthread_mutex_t	mtx_end;
	struct philo	*next;
}					t_philo;

typedef struct s_table
{
	long long	start_time;
	int			nbr_of_philo;
	int			die_time;
	int			eat_time;
	int			sleep_time;
	int			cycles;
	t_philo		*philos;
	t_philo		*philos_head;
}				t_table;
// ---------------------------- end struct ---------------------------------- //

