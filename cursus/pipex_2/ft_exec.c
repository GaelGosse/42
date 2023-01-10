/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exec.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 16:24:39 by gael              #+#    #+#             */
/*   Updated: 2023/01/10 18:39:28 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// void	ft_pipex(t_dt *data_ppx, char **argv, char **envp, int argc)
// {
// 	if(pipe(data_ppx->fd) == -1)
// 		exit(1);
// 	data_ppx->id1 = fork();
// 	init_file(data_ppx, argv, argc);
// 	if(data_ppx->id1 == 0)
// 	{
// 		dup2(data_ppx->fd_infile, STDIN_FILENO);
// 		dup2(data_ppx->fd[1], STDOUT_FILENO);
// 		close(data_ppx->fd[0]);
// 		close(data_ppx->fd[1]);
// 		ft_build_path(data_ppx, ft_findpath(envp), data_ppx->option1[0]);
// 		execve(data_ppx->cmd_path, data_ppx->option1, envp);
// 	}
// 	else
// 	{
// 		data_ppx->id2 = fork();
// 		if (data_ppx->id2 == 0)
// 		{
// 			dup2(data_ppx->fd[0], STDIN_FILENO);
// 			dup2(data_ppx->fd_outfile, STDOUT_FILENO);
// 			close(data_ppx->fd[0]);
// 			close(data_ppx->fd[1]);
// 			ft_build_path(data_ppx, ft_findpath(envp), data_ppx->option2[0]);
// 			execve(data_ppx->cmd_path, data_ppx->option2, envp);
// 		}
// 		else
// 		{
// 			ft_free(data_ppx->option1);
// 			ft_free(data_ppx->option2);
// 			close(data_ppx->fd[0]);
// 			close(data_ppx->fd[1]);
// 			waitpid(data_ppx->id1, NULL, 0);
// 			waitpid(data_ppx->id2, NULL, 0);
// 		}
// 	}
// }