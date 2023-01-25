/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exec.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 16:24:39 by gael              #+#    #+#             */
/*   Updated: 2023/01/24 16:36:39 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pipex.h"

void	ft_child_one(t_dt *data_ppx, char **envp)
{
	dup2(data_ppx->fd_in_f, STDIN_FILENO);
	dup2(data_ppx->fd_std[1], STDOUT_FILENO);
	close(data_ppx->fd_std[0]);
	close(data_ppx->fd_std[1]);
	if (data_ppx->fd_in_f > 2)
		close(data_ppx->fd_in_f);
	if (data_ppx->fd_out_f > 2)
		close(data_ppx->fd_out_f);
	if (!data_ppx->all_cmd[0][0])
		return ;
	execve(data_ppx->all_cmd[0][0], data_ppx->all_cmd[0], envp);
	ft_free_data_cmd(data_ppx);
	ft_error("command not found\n");
	exit(1);
}

void	ft_child_two(t_dt *data_ppx, char **envp)
{
	dup2(data_ppx->fd_std[0], STDIN_FILENO);
	dup2(data_ppx->fd_out_f, STDOUT_FILENO);
	close(data_ppx->fd_std[0]);
	close(data_ppx->fd_std[1]);
	if (data_ppx->fd_in_f > 2)
		close(data_ppx->fd_in_f);
	if (data_ppx->fd_out_f > 2)
		close(data_ppx->fd_out_f);
	if (!data_ppx->all_cmd[1][0])
		return ;
	execve(data_ppx->all_cmd[1][0], data_ppx->all_cmd[1], envp);
	ft_free_data_cmd(data_ppx);
	ft_error("command not found\n");
	exit(1);
}

void	ft_exec(t_dt *data_ppx, int argc, char **argv, char **envp)
{
	ft_init_file_n_pipe(data_ppx, argv, argc);
	data_ppx->pids_process[0] = fork();
	if (data_ppx->pids_process[0] == 0)
	{
		if (data_ppx->fd_in_f == -1)
			return (ft_close_ch(data_ppx));
		ft_child_one(data_ppx, envp);
	}
	else
	{
		data_ppx->pids_process[1] = fork();
		if (data_ppx->pids_process[1] == 0)
		{
			if (data_ppx->fd_out_f == -1)
				return (ft_error("Permission denied\n"), ft_close_ch(data_ppx));
			ft_child_two(data_ppx, envp);
		}
		else
		{
			ft_close(data_ppx);
			waitpid(data_ppx->pids_process[0], NULL, 0);
			waitpid(data_ppx->pids_process[1], NULL, 0);
		}
	}
}
