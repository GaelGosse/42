/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pipex.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 15:26:59 by ggosse            #+#    #+#             */
/*   Updated: 2023/01/22 19:35:11 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PIPEX_H
# define FT_PIPEX_H

// free, perror,
# include <stdio.h>
# include <errno.h>

// open, malloc
# include <stdlib.h>

// fork, wait, waitpid
# include <sys/types.h>
# include <sys/stat.h>

// wait, waitpid
# include <sys/wait.h>

// access, read, close, write, access, dup(2), execve, exit, fork, pipe, unlink
# include <unistd.h>

// strerror
# include <string.h>

// pipe, unlink
# include <fcntl.h>

# include "color.h"
# include "libft/libft.h"

# define FAIL -1
# define SUCCESS 1

typedef struct dt
{
	char	***all_cmd;
	char	***all_option;
	pid_t	*pids_process;
	int		fd_infile;
	int		fd_outfile;
	int		fd_std[2];
}			t_dt;

// ft_pipex.c
void	ft_check(int argc, char **argv, char **envp, t_dt *data);
void	ft_pipex(int argc, char **argv, char **envp, t_dt *data);
void	ft_build_data(int argc, char **argv, t_dt *data);

// ft_find_path.c
int		ft_find_cmd(char **envp, t_dt *data, int ite_find_path, int ite_env);
int		ft_find_path(char **envp, t_dt *data, int ite_find_path);
int		ft_find_env(char **envp, t_dt *data);

// ft_exec.c
void	ft_exec(t_dt *data, int argc, char **argv, char **envp);

// ft_free_n_err.c
void	ft_print_three(t_dt *data);
void	ft_free_data_cmd(t_dt *data);
void	ft_free_tab_str(char **tab_str);
void	ft_error(char *message);

void	ft_free_tab_str(char **tab_str);

#endif