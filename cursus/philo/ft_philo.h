/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_philo.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 20:57:26 by ggosse            #+#    #+#             */
/*   Updated: 2023/02/12 20:58:23 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PHILO_H
# define FT_PHILO_H

# include <dirent.h>
# include <errno.h>
# include <fcntl.h>
# include <limits.h>
# include <readline/readline.h>
# include <readline/history.h>
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
# include "libft/libft.h"

# define SUCCESS 1
# define FAIL -1

typedef struct s_table
{
	int	nbr_of_philo;
	int	die_time;
	int	eat_time;
	int	sleep_time;
	int	cycles;
}		t_table;

//ft_philo.c
void			ft_init_struct(t_table *table);
//ft_philo.c
int				ft_parsing(int argc, char *argv[], t_table *table);

#endif