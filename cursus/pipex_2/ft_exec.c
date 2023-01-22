/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exec.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gael <gael@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 16:24:39 by gael              #+#    #+#             */
/*   Updated: 2023/01/20 19:10:20 by gael             ###   ########.fr       */
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
}

void	ft_child_two(t_dt *data_ppx, char **envp)
{
	dup2(data_ppx->fd_std[0], STDIN_FILENO);
	dup2(data_ppx->fd_outfile, STDOUT_FILENO);
	close(data_ppx->fd_std[0]);
	close(data_ppx->fd_std[1]);
	execve(data_ppx->all_cmd[1][0], data_ppx->all_cmd[1], envp);
}

void	ft_exec(t_dt *data_ppx, int argc, char **argv, char **envp)
{
	data_ppx->fd_infile = open(argv[1], O_WRONLY, 0777);
	data_ppx->fd_outfile = open(argv[argc - 1], O_WRONLY, 0777);
	if (pipe(data_ppx->fd_std) == -1)
		exit (1);
	data_ppx->pids_process[0] = fork();
	if (data_ppx->pids_process[0] == 0)
	{
		// fprintf(stderr, RED"A\n"RST);
		dup2(data_ppx->fd_infile, STDIN_FILENO);
		dup2(data_ppx->fd_std[1], STDOUT_FILENO);
		close(data_ppx->fd_std[0]);
		close(data_ppx->fd_std[1]);
		// execve(data_ppx->all_cmd[0][0], data_ppx->all_cmd[0], envp);
		// execve("/usr/bin/cat", data_ppx->all_cmd[0], envp);
		ft_error();
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
			ft_error();
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
