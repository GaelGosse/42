/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_all.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 14:50:16 by ggosse            #+#    #+#             */
/*   Updated: 2023/04/02 20:04:34 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_minishell.h"

void	free_each_prpt(t_mini_sh *mini_sh)
{
	free_parsing(mini_sh);
	free_type(mini_sh);
	if (mini_sh->prepare_exec)
		free_exec(mini_sh);
	if (mini_sh->prepare_exec_type)
		free_exectype(mini_sh);
}

void	free_all(t_mini_sh *mini_sh)
{
	free_each_prpt(mini_sh);
	free_env(mini_sh);
	printf(CYAN"free all env sortted"RESET"\n");
	free_env_sorted(mini_sh);
	free_data(mini_sh);
	// if (mini_sh->exec)
	// {
		free(mini_sh->exec);
		mini_sh->exec = NULL;
	// }
	// if (mini_sh->pids)
	// {
		free(mini_sh->pids);
		mini_sh->pids = NULL;
	// }
}
