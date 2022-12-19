/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exec.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 16:26:18 by ggosse            #+#    #+#             */
/*   Updated: 2022/12/19 18:11:02 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pipex.h"

int	ft_find_path(char *simple_cmd, char **envp, t_dt *data_ppx)
{
	int	ite_env;
	int	ite_data;
	char *cmd_path_absolue;

	cmd_path_absolue = NULL;
	ite_data = -1;
	ite_env = -1;
	if ()
	{
		
	}
	if (!envp)
		return (1);
	
	while (envp[++ite_env])
	{
		if (ft_strncmp(envp[ite_env], "PATH=", 5) == 0)
		{
			data_ppx->path = ft_split(envp[ite_env] + 5, ':');
			while (data_ppx->path[++ite_data])
			{
				cmd_path_absolue = ft_strjoin(data_ppx->path[ite_data], "/");
				cmd_path_absolue = ft_strjoin(cmd_path_absolue, simple_cmd);
				printf(GREEN"cmd_path_absolue: %s\n"RST, cmd_path_absolue);
				if (access(cmd_path_absolue, F_OK) == 0)
				{
					printf(BOLD_CYAN"cmd_path_absolue: %s\n"RST, cmd_path_absolue);
					return (0);
				}
			}
		}
	}
	return (1);
	// (void)cmd_path_absolue;
	(void)ite_data;
	(void)data_ppx;
	(void)envp;
	(void)simple_cmd;
}