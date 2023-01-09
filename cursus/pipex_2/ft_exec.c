/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exec.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gael <gael@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 16:24:39 by gael              #+#    #+#             */
/*   Updated: 2023/01/08 17:15:23 by gael             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// void	init_file(t_proc *proc, char **argv, int argc)
// {
// 	proc->infile = open(argv[1], O_WRONLY, 777);
// 	proc->outfile = open(argv[argc], O_WRONLY, 777);
// 	proc->option1 = ft_split(argv[2], ' ');
// 	proc->option2 = ft_split(argv[3], ' ');
// }

// void	ft_pipex(t_proc *proc, char **argv, char **envp, int argc)
// {
// 	if(pipe(proc->fd) == -1)
// 		exit(1);
// 	proc->id1 = fork();
// 	init_file(proc, argv, argc);
// 	if(proc->id1 == 0)
// 	{
// 		dup2(proc->infile, STDIN_FILENO);
// 		dup2(proc->fd[1], STDOUT_FILENO);
// 		close(proc->fd[0]);
// 		close(proc->fd[1]);
// 		ft_build_path(proc, ft_findpath(envp), proc->option1[0]);
// 		execve(proc->cmd_path, proc->option1, envp);
// 	}
// 	else
// 	{
// 		proc->id2 = fork();
// 		if (proc->id2 == 0)
// 		{
// 			dup2(proc->fd[0], STDIN_FILENO);
// 			dup2(proc->outfile, STDOUT_FILENO);
// 			close(proc->fd[0]);
// 			close(proc->fd[1]);
// 			ft_build_path(proc, ft_findpath(envp), proc->option2[0]);
// 			execve(proc->cmd_path, proc->option2, envp);
// 		}
// 		else
// 		{
// 			ft_free(proc->option1);
// 			ft_free(proc->option2);
// 			close(proc->fd[0]);
// 			close(proc->fd[1]);
// 			waitpid(proc->id1, NULL, 0);
// 			waitpid(proc->id2, NULL, 0);
// 		}
// 	}
// }