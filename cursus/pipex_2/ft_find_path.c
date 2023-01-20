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

int	ft_find_cmd(char **envp, t_dt *data_ppx, int ite_find, int ite_env)
{
	char	**path_cmd;
	char	*cmd_path_absolue;
	char	*path_absolue;
	char	*cmd;
	int		ite_data;

	ite_data = 0;
	ite_data = -1;
	path_cmd = ft_split(envp[ite_env] + 5, ':');
	cmd = ft_strdup(data_ppx->all_cmd[ite_find][0]);
	while (path_cmd[++ite_data])
	{
		path_absolue = ft_strjoin(path_cmd[ite_data], "/");
		cmd_path_absolue = ft_strjoin(path_absolue, cmd);
		free(path_absolue);
		if (access(cmd_path_absolue, X_OK) == 0)
		{
			free(data_ppx->all_cmd[ite_find][0]);
			data_ppx->all_cmd[ite_find][0] = cmd_path_absolue;
			data_ppx->all_cmd[ite_find][0][ft_strlen(cmd_path_absolue)] = '\0';
			free(cmd);
			ft_free_tab_str(path_cmd);
			return (1);
		}
		else
			free(cmd_path_absolue);
	}
	free(cmd);
	ft_free_tab_str(path_cmd);
	return (0);
}

int	ft_find_path(char **envp, t_dt *data_ppx, int ite_find)
{
	int		ite_env;

	ite_env = -1;
	while (envp[++ite_env])
	{
		if (ft_strncmp(envp[ite_env], "PATH=", 5) == 0)
		{
			ft_find_cmd(envp, data_ppx, ite_find, ite_env);
		}
	}
	return (0);
	(void)ite_find;
	(void)envp;
	(void)data_ppx;
}

int	ft_find_env(char **envp, t_dt *data_ppx)
{
	int		ite_find;

	ite_find = -1;
	while (data_ppx->all_cmd[++ite_find])
	{
		if (!access(data_ppx->all_cmd[ite_find][0], X_OK) == 0)
		{
			if (envp[0])
			{
				ft_find_path(envp, data_ppx, ite_find);
			}
		}
		// printf(BACK_BLUE" ----- "RESET"\n");
	}
	(void)envp;
	return (0);
}
