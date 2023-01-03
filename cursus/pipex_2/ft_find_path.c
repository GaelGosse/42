/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_env.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 14:54:57 by ggosse            #+#    #+#             */
/*   Updated: 2023/01/03 19:36:37 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pipex.h"

int	ft_find_cmd(char **envp, t_dt *data_ppx, int ite_find_path, int ite_env)
{
	char	**path_cmd;
	char	*cmd_path_absolue;
	int		ite_data;

	ite_data = 0;
	path_cmd = ft_split(envp[ite_env] + 5, ':');
	ite_data = -1;
	while (path_cmd[++ite_data])
	{
		cmd_path_absolue = NULL;
		cmd_path_absolue = ft_strjoin(path_cmd[ite_data], "/");
		cmd_path_absolue = ft_strjoin(cmd_path_absolue, data_ppx->all_cmd[ite_find_path][0]);
		if (access(cmd_path_absolue, X_OK) == 0)
		{
			free(data_ppx->all_cmd[ite_find_path][0]);
			data_ppx->all_cmd[ite_find_path][0] = (char *)malloc(sizeof(char) * (ft_strlen(cmd_path_absolue) + 1));
			data_ppx->all_cmd[ite_find_path][0] = cmd_path_absolue;
			printf(BACK_GREEN"cmd_path_absolue: %s"RESET"\n", cmd_path_absolue);
		}
	}
	free(path_cmd);
	free(cmd_path_absolue);
	return (1);
}

int	ft_find_path(char **envp, t_dt *data_ppx, int ite_find_path)
{
	int		ite_env;

	ite_env = -1;
	while (envp[++ite_env])
	{
		if (ft_strncmp(envp[ite_env], "PATH=", 5) == 0)
		{
			ft_find_cmd(envp, data_ppx, ite_find_path, ite_env);
		}
	}
	return (0);
	(void)ite_find_path;
	(void)envp;
	(void)data_ppx;
}

int	ft_find_env(char **envp, t_dt *data_ppx)
{
	int		ite_find_path;

	ite_find_path = -1;
	while (data_ppx->all_cmd[++ite_find_path])
	{
		if (access(data_ppx->all_cmd[ite_find_path][0], F_OK) == 0 
		&& access(data_ppx->all_cmd[ite_find_path][0], X_OK) == 0)
			printf(BACK_GREEN"data_ppx->all_cmd[ite_find_path][0]: %s"RESET"\n", data_ppx->all_cmd[ite_find_path][0]);
		else
		{
			if (envp[0])
			{
				ft_find_path(envp, data_ppx, ite_find_path);
			}
		}
		printf("\n");
	}
	(void)envp;
	return (0);
}