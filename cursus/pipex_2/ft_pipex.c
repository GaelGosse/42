/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pipex.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gael <gael@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 15:15:26 by ggosse            #+#    #+#             */
/*   Updated: 2023/01/08 17:50:00 by gael             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pipex.h"

void	ft_build_data(int argc, char **argv, t_dt *data_ppx)
{
	printf(BACK_WHITE"ft_build_data\n"RST);
	
	int		ite_argv;

	ite_argv = 2;
	data_ppx->all_cmd = (char ***)malloc(sizeof(char **) * (argc - 3 + 1));
	data_ppx->all_cmd[argc - 3] = 0;
	data_ppx->pids_process = (pid_t *)malloc(sizeof(pid_t) * (argc - 3 + 1));
	while (argv[ite_argv + 1])
	{
		data_ppx->all_cmd[ite_argv - 2] = ft_split(argv[ite_argv], ' ');
		ite_argv++;
	}
	(void)argc;
	(void)argv;
	(void)data_ppx;
}

void	ft_pipex(int argc, char **argv, char **envp, t_dt *data_ppx)
{
	printf(BACK_WHITE"ft_pipex\n"RST);

	ft_build_data(argc, argv, data_ppx);
	ft_print_three(data_ppx);
	ft_find_env(envp, data_ppx);
	ft_print_three(data_ppx);

	(void)argc;
	(void)argv;
	(void)envp;
	(void)data_ppx;
}

int main(int argc, char **argv, char **envp){
	t_dt	data_ppx;

	if (argc < 5)
		return (ft_error(), 1);
	ft_pipex(argc, argv, envp, &data_ppx);

	ft_free_data_cmd(&data_ppx);
	(void)argc;
	(void)argv;
	(void)envp;
}

// 1 | 3 < 2 arg
// 2 > 1 | 4 < 3 arg