/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pipex.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 15:26:59 by ggosse            #+#    #+#             */
/*   Updated: 2023/01/24 16:40:41 by ggosse           ###   ########.fr       */
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
	int		fd_in_f;
	int		fd_out_f;
	int		fd_std[2];
}			t_dt;

// ft_pipex.c
void	ft_check(int argc, char **argv, char **envp, t_dt *data);
void	ft_pipex(int argc, char **argv, char **envp, t_dt *data);
void	ft_build_data(int argc, char **argv, t_dt *data);

// ft_find_path.c
void	ft_free_all(char *str, char **tab);
int		ft_find_cmd(char **envp, t_dt *data_ppx, int ite_find, int ite_env);
int		ft_find_path(char **envp, t_dt *data_ppx, int ite_find);
int		ft_find_env(char **envp, t_dt *data_ppx);

// ft_exec.c
void	ft_child_one(t_dt *data_ppx, char **envp);
void	ft_child_two(t_dt *data_ppx, char **envp);
void	ft_exec(t_dt *data_ppx, int argc, char **argv, char **envp);

// ft_exec_utils.c
void	ft_init_file_n_pipe(t_dt *data_ppx, char **argv, int argc);
void	ft_close(t_dt *data_ppx);
void	ft_close_ch(t_dt *data_ppx);

// ft_free_n_err.c
void	ft_print_three(t_dt *data);
void	ft_free_data_cmd(t_dt *data);
void	ft_free_tab_str(char **tab_str);
void	ft_error(char *message);

void	ft_free_tab_str(char **tab_str);

#endif