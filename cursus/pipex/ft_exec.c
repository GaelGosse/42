/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exec.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 16:26:18 by ggosse            #+#    #+#             */
/*   Updated: 2022/12/15 19:06:47 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pipex.h"

int	ft_exec_cmd(char *cmd_with_flags, char **envp)
{
	int	ite_env;

	ite_env = -1;
	if (!envp)
		return (0);
	while (envp[++ite_env])
	{
		if (ft_strncmp(envp[ite_env], "PATH=", 5) == 0)
			printf(BACK_RED"envp[ite_env]: %s"RESET"\n", envp[ite_env]);
		else
			printf(BACK_GREEN"envp[ite_env]: %s"RESET"\n", envp[ite_env]);
	}
	return (1);
	(void)envp;
	(void)cmd_with_flags;
}