/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exec.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 16:24:39 by gael              #+#    #+#             */
/*   Updated: 2023/01/20 15:53:19 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pipex.h"

void	ft_exec(t_dt *data_ppx, int argc, char **argv, char **envp)
{
	printf(UNDER_WHITE"ft_exec"RESET"\n");

	int	ite_pids;

	ite_pids = -1;
	ite_pids = 0;
	while (ite_pids < argc - 3)
	{
		if (ite_pids < argc - 4)
		{
			if (pipe(data_ppx->fd_std) == -1)
			{
				// printf(RED"pipe stop here"RESET"\n");
				exit(1);
			}
			fprintf(stderr,UNDER_PURPLE"ite_pids: %i"RESET"\n", ite_pids);
			fprintf(stderr,PURPLE"data_ppx->all_cmd[ite_pids]: %s\n"RESET, data_ppx->all_cmd[ite_pids][0]);
			fprintf(stderr,"data_ppx->fd_std[0]: %i\n", data_ppx->fd_std[0]);
			fprintf(stderr,"data_ppx->fd_std[1]: %i\n", data_ppx->fd_std[1]);
			dup2(data_ppx->fd_infile, STDIN_FILENO);
			dup2(data_ppx->fd_std[1], STDOUT_FILENO);
			fprintf(stderr,PURPLE"data_ppx->all_cmd[ite_pids + 1]: %s\n"RESET, data_ppx->all_cmd[ite_pids + 1][0]);
			fprintf(stderr,"\n");
		}
		data_ppx->pids_process[ite_pids] = fork();
		if (data_ppx->pids_process[ite_pids] == 0)
		{
			//VIE DE L'ENFANT
			// dup2(fd);
			// printf(CYAN"there"RESET"\n");
			//execve
			exit (0); 
		}
		// dup
		// printf(BLUE"data_ppx->pids_process[%i]: %i"RESET"\n", ite_pids, data_ppx->pids_process[ite_pids]);
		ite_pids++;
	}
	ite_pids = 0;
	// printf(RED"here"RESET"\n");
	while (ite_pids < argc - 3)
	{
		// printf(PURPLE"data_ppx->pids_process[%i]: %i"RESET"\n", ite_pids, data_ppx->pids_process[ite_pids]);
		if (data_ppx->pids_process[ite_pids] != 0)
		{
			fprintf(stderr, GREEN"data_ppx->pids_process[%i]: %i"RESET"\n", ite_pids, data_ppx->pids_process[ite_pids]);
			waitpid(data_ppx->pids_process[ite_pids], NULL, 0);
		}
		else
			fprintf(stderr, RED"data_ppx->pids_process[%i]: %i"RESET"\n", ite_pids, data_ppx->pids_process[ite_pids]);
		ite_pids++;
	}
	printf("\n");
}



// 	// execve(data_ppx->all_cmd[0][0], data_ppx->all_cmd[0], envp);
// 	(void)argc;
// 	(void)argv;
// 	(void)envp;
// }


// int main(int argc, char const *argv[], char **envp)
// {
// 	char	*str = "/usr/bin/ls -l -a";
// 	pid_t	id = fork();
	
// 	if (id == 0)
// 	{
// 		execve(ft_split(str, ' ')[0], ft_split(str, ' '), envp);
// 	}
// 	else
// 	{
// 		waitpid(id, NULL, 0);
// 	}

// 	(void)argc;
// 	(void)argv;
// 	return 0;
// }


	// if(data_ppx->pids_process[0] == 0)
	// {
	// 	dup2(data_ppx->fd_infile, STDIN_FILENO);
	// 	dup2(data_ppx->fd_std[1], STDOUT_FILENO);
	// 	close(data_ppx->fd_std[0]);
	// 	close(data_ppx->fd_std[1]);
	// 	printf(GREEN"data_ppx->all_cmd[0][0]: %s\n"RESET, data_ppx->all_cmd[0][0]);
	// 	execve(data_ppx->all_cmd[0][0], data_ppx->all_cmd[0], envp);
	// }
	// else
	// {
	// 	data_ppx->pids_process[1] = fork();
	// 	if (data_ppx->pids_process[1] == 0)
	// 	{
	// 		dup2(data_ppx->fd_std[0], STDIN_FILENO);
	// 		dup2(data_ppx->fd_outfile, STDOUT_FILENO);
	// 		close(data_ppx->fd_std[0]);
	// 		close(data_ppx->fd_std[1]);
	// 		printf(GREEN"data_ppx->all_cmd[0][0]: %s\n"RESET, data_ppx->all_cmd[0][0]);
	// 		execve(data_ppx->all_cmd[1][0], data_ppx->all_cmd[1], envp);
	// 	}
	// 	else
	// 	{
	// 		close(data_ppx->fd_std[0]);
	// 		close(data_ppx->fd_std[1]);
	// 		waitpid(data_ppx->pids_process[0], NULL, 0);
	// 		waitpid(data_ppx->pids_process[1], NULL, 0);
	// 	}
	// }