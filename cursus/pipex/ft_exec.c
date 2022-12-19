/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exec.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 16:26:18 by ggosse            #+#    #+#             */
/*   Updated: 2022/12/19 15:23:35 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pipex.h"

int	ft_exec_cmd(char *simple_cmd, char **envp, t_dt data_ppx)
{
	int	ite_env;
	int	ite_data;

	ite_data = -1;
	ite_env = -1;
	if (!envp)
		return (0);
	printf(BACK_GREEN"simple_cmd: %s"RESET"\n", simple_cmd);
	while (envp[++ite_env])
	{
		if (ft_strncmp(envp[ite_env], "PATH=", 5) == 0)
		{
			data_ppx.path = ft_split(envp[ite_env] + 5, ':');
			while (data_ppx.path[++ite_data])
				printf(GREEN"%s/ XXXX \n"RST, data_ppx.path[ite_data]);
		}
	}
	return (1);
	(void)ite_data;
	(void)data_ppx;
	(void)envp;
	(void)simple_cmd;
}