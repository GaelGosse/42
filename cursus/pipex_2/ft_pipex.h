/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pipex.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gael <gael@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 15:26:59 by ggosse            #+#    #+#             */
/*   Updated: 2023/01/08 17:57:23 by gael             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// free, perror,
#include <stdio.h>
#include <errno.h>

// open, malloc
#include <stdlib.h>

// fork, wait, waitpid
#include <sys/types.h>
#include <sys/stat.h>

// wait, waitpid
#include <sys/wait.h>

// access, read, close, write, access, dup(2), execve, exit, fork, pipe, unlink
#include <unistd.h>

// strerror
#include <string.h>

// pipe, unlink
#include <fcntl.h>

#include "color.h"
#include "libft/libft.h"

typedef struct dt
{
	char	***all_cmd;
	pid_t	*pids_process;
	int		fd_infile;
	int		fd_outfile;
}			t_dt;

// ft_pipex.c
void	ft_error(void);
void	ft_check(int argc, char **argv, char **envp, t_dt *data_ppx);
void	ft_pipex(int argc, char **argv, char **envp, t_dt *data_ppx);
void	ft_build_data(int argc, char **argv, t_dt *data_ppx);

// ft_find_path.c
int		ft_find_cmd(char **envp, t_dt *data_ppx, int ite_find_path, int ite_env);
int		ft_find_path(char **envp, t_dt *data_ppx, int ite_find_path);
int		ft_find_env(char **envp, t_dt *data_ppx);

// ft_exec.c


// ft_free_n_err.c
void	ft_print_three(t_dt *data_ppx);
void	ft_free_data_cmd(t_dt *data_ppx);
void	ft_free_tab_str(char **tab_str);
void	ft_error(void);


void	ft_free_tab_str(char **tab_str);
