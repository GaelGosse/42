/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exec.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 16:24:39 by gael              #+#    #+#             */
/*   Updated: 2023/01/22 19:36:27 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pipex.h"

void	ft_child_one(t_dt *data_ppx, char **envp)
{
	dup2(data_ppx->fd_infile, STDIN_FILENO);
	dup2(data_ppx->fd_std[1], STDOUT_FILENO);
	close(data_ppx->fd_std[0]);
	close(data_ppx->fd_std[1]);
	execve(data_ppx->all_cmd[0][0], data_ppx->all_cmd[0], envp);
	ft_free_data_cmd(data_ppx);
	ft_error("command not found\n");
	exit(1);
}

void	ft_child_two(t_dt *data_ppx, char **envp)
{
	dup2(data_ppx->fd_std[0], STDIN_FILENO);
	dup2(data_ppx->fd_outfile, STDOUT_FILENO);
	close(data_ppx->fd_std[0]);
	close(data_ppx->fd_std[1]);
	execve(data_ppx->all_cmd[1][0], data_ppx->all_cmd[1], envp);
	ft_free_data_cmd(data_ppx);
	ft_error("command not found\n");
	exit(1);
}

void	ft_init_file_n_pipe(t_dt *data_ppx, char **argv, int argc)
{
	data_ppx->fd_infile = open(argv[1], O_RDWR, 0777);
	data_ppx->fd_outfile = open(argv[argc - 1], O_WRONLY, 0777);
	if (pipe(data_ppx->fd_std) == -1)
		exit (1);
}

void	ft_exec(t_dt *data_ppx, int argc, char **argv, char **envp)
{
	ft_init_file_n_pipe(data_ppx, argv, argc);
	data_ppx->pids_process[0] = fork();
	if (data_ppx->pids_process[0] == 0)
	{
		dup2(data_ppx->fd_infile, STDIN_FILENO);
		dup2(data_ppx->fd_std[1], STDOUT_FILENO);
		close(data_ppx->fd_std[0]);
		close(data_ppx->fd_std[1]);
		execve(data_ppx->all_cmd[0][0], data_ppx->all_cmd[0], envp);
		ft_free_data_cmd(data_ppx);
		ft_error("command not found\n");
		exit(1);
	}
	else
	{
		data_ppx->pids_process[1] = fork();
		if (data_ppx->pids_process[1] == 0)
		{
			dup2(data_ppx->fd_std[0], STDIN_FILENO);
			dup2(data_ppx->fd_outfile, STDOUT_FILENO);
			close(data_ppx->fd_std[0]);
			close(data_ppx->fd_std[1]);
			execve(data_ppx->all_cmd[1][0], data_ppx->all_cmd[1], envp);
			ft_free_data_cmd(data_ppx);
			ft_error("command not found\n");
			exit(1);
		}
		else
		{
			close(data_ppx->fd_std[0]);
			close(data_ppx->fd_std[1]);
			waitpid(data_ppx->pids_process[0], NULL, 0);
			waitpid(data_ppx->pids_process[1], NULL, 0);
		}
	}
	(void)argv;
	(void)envp;
}
