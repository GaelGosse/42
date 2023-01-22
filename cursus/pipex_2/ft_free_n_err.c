/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_n_err.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gael <gael@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 17:17:35 by gael              #+#    #+#             */
/*   Updated: 2023/01/20 19:02:30 by gael             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pipex.h"

void	ft_print_three(t_dt *data_ppx)
{
	int	ite_test;
	int	ite_int;

	ite_test = 0;
	ite_int = 0;
	printf(BOLD_CYAN" ----- START PRINT ----- "RESET"\n");
	while (data_ppx->all_cmd[ite_test])
	{
		ite_int = 0;
		while (data_ppx->all_cmd[ite_test][ite_int])
		{
			printf("%s\n", data_ppx->all_cmd[ite_test][ite_int]);
			ite_int++;
		}
		printf(BOLD_CYAN"\t---------- "RESET"\n");
		ite_test++;
	}
	(void)ite_test;
	(void)ite_int;
	(void)data_ppx;
}

void	ft_free_data_cmd(t_dt *data_ppx)
{
	int	ite_free_all_cmd;
	int	ite_free_cmd;

	ite_free_all_cmd = 0;
	ite_free_cmd = 0;
	while (data_ppx->all_cmd[ite_free_all_cmd])
	{
		ite_free_cmd = 0;
		while (data_ppx->all_cmd[ite_free_all_cmd][ite_free_cmd])
		{
			free(data_ppx->all_cmd[ite_free_all_cmd][ite_free_cmd]);
			ite_free_cmd++;
		}
		free(data_ppx->all_cmd[ite_free_all_cmd]);
		ite_free_all_cmd++;
	}
	free(data_ppx->pids_process);
	free(data_ppx->all_cmd);
	(void)ite_free_all_cmd;
	(void)ite_free_cmd;
	(void)data_ppx;
}

void	ft_free_tab_str(char **tab_str)
{
	int	ite_free_two;

	ite_free_two = -1;
	while (tab_str[++ite_free_two])
		free(tab_str[ite_free_two]);
	free(tab_str);
}

void	ft_error(void)
{
	write(2, "Error\n", 6);
}
