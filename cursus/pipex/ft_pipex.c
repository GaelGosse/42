/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pipex.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 10:32:56 by ggosse            #+#    #+#             */
/*   Updated: 2023/01/02 15:12:03 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pipex.h"

void	ft_error(void)
{
	write(1, "Error\n", 6);
}

void	ft_check(int argc, char **argv, char **envp, t_dt *data_ppx)
{
	printf(BACK_WHITE"ft_check\n"RST);




	if (access(argv[1], F_OK) == 0)
	{
		// printf("\nexec first cmd argv[2]\t\t%s\n", argv[2]);
		
		data_ppx->all_cmd = ft_split(argv[2], ' ');
		ft_find_path(data_ppx->all_cmd[0], envp, data_ppx);
	}

	// printf(BACK_YELLOW"data_ppx->all_cmd: %s"RESET"\n", data_ppx->all_cmd[0]);


	if (access(argv[argc - 1], F_OK) != 0)
		// printf("create argv[argc - 1]: %s\n", argv[argc - 1]);
	// printf("\nexec last cmd argv[%i]\t\t%s\n", (argc - 2), argv[argc - 2]);
	
	data_ppx->all_cmd = ft_split(argv[argc - 2], ' ');
	ft_find_path(data_ppx->all_cmd[0], envp, data_ppx);

	// printf(BACK_YELLOW"data_ppx->all_cmd: %s"RESET"\n", data_ppx->all_cmd[0]);

	(void)argv;
	(void)envp;
}

void	ft_pipex(int argc, char **argv, char **envp, t_dt *data_ppx)
{
	printf(BACK_WHITE"ft_pipex\n"RST);

	ft_check(argc, argv, envp, data_ppx);
	(void)argv;
	(void)envp;
}

int main(int argc, char **argv, char **envp){
	t_dt	data_ppx;

	if (argc < 5)
		return (ft_error(), 1);
	ft_pipex(argc, argv, envp, &data_ppx);
	(void)envp;
	(void)argc;
	(void)argv;
}