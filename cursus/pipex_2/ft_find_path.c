/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_path.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 14:54:57 by ggosse            #+#    #+#             */
/*   Updated: 2023/01/03 19:31:40 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pipex.h"

void	ft_find_path(char **envp, t_dt *data_ppx)
{
	int		ite_env;
	int		ite_data;
	int		ite_find_path;
	char	**path_cmd;
	char	*cmd_path_absolue;

	ite_env = 0;
	ite_data = 0;
	ite_find_path = -1;
	path_cmd = NULL;
	cmd_path_absolue = NULL;
	while (data_ppx->all_cmd[++ite_find_path])
	{
		if (access(data_ppx->all_cmd[ite_find_path][0], F_OK) == 0 
		&& access(data_ppx->all_cmd[ite_find_path][0], X_OK) == 0)
			printf(BACK_GREEN"data_ppx->all_cmd[ite_find_path][0]: %s"RESET"\n", data_ppx->all_cmd[ite_find_path][0]);
		else
		{
			if (envp[0])
			{
				ite_env = -1;
				while (envp[++ite_env])
				{
					if (ft_strncmp(envp[ite_env], "PATH=", 5) == 0)
					{
						path_cmd = ft_split(envp[ite_env] + 5, ':');
						ite_data = -1;
						while (path_cmd[++ite_data])
						{
							cmd_path_absolue = ft_strjoin(path_cmd[ite_data], "/");
							cmd_path_absolue = ft_strjoin(cmd_path_absolue, data_ppx->all_cmd[ite_find_path][0]);
							if (access(cmd_path_absolue, F_OK) == 0 
								&& access(cmd_path_absolue, X_OK) == 0)
							{
								free(data_ppx->all_cmd[ite_find_path][0]);
								data_ppx->all_cmd[ite_find_path][0] = (char *)malloc(sizeof(char) * (ft_strlen(cmd_path_absolue) + 1));
								data_ppx->all_cmd[ite_find_path][0] = cmd_path_absolue;
								printf(BACK_GREEN"cmd_path_absolue: %s"RESET"\n", cmd_path_absolue);
							}
						}
					}
				}
			}
		}
		printf("\n");
	}
	(void)path_cmd;
	(void)envp;
}