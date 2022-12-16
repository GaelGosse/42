/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pipex.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 10:32:56 by ggosse            #+#    #+#             */
/*   Updated: 2022/12/16 17:47:56 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pipex.h"

void	ft_error(void)
{
	write(1, "Error\n", 6);
}

void	ft_check(int argc, char **argv, char **envp)
{
	printf(RED"ft_check\n"RST);

	if (access(argv[1], F_OK) == 0)
	{
		printf("exec first cmd argv[2]\n");
	}
	ft_exec_cmd(argv[2], envp);
	if (access(argv[argc - 1], F_OK) == 0)
	{
		printf("exec first cmd argv[%i]\n", (argc - 1));
	}
	(void)argv;
	(void)envp;
}

void	ft_pipex(int argc, char **argv, char **envp, t_dt data_ppx)
{
	printf(RED"ft_pipex\n"RST);

	ft_check(argc, argv, envp);
	(void)argv;
	(void)envp;
}

int main(int argc, char **argv, char **envp){
	t_dt	data_ppx;

	if (argc < 5)
		return (ft_error(), 1);
	ft_pipex(argc, argv, envp, data_ppx);
	(void)envp;
	(void)argc;
	(void)argv;
}