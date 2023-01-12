/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_so_long.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 18:16:46 by gael              #+#    #+#             */
/*   Updated: 2023/01/12 15:08:46 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_so_long.h"

int	parsing(int argc, char **argv, char **envp)
{
	if (ft_check_ext(argv[1]) == FAIL)
		return (printf("wrong filename extension\n"), FAIL);
	if (ft_existing_file(argv[1]))
		return (printf("file does not exist\n"), FAIL);
	// ft_build_map();
	return (SUCCESS);
	(void)argc;
	(void)argv;
	(void)envp;
}

int main(int argc, char **argv, char **envp)
{
	if (parsing(argc, argv, envp) == FAIL)
		return (FAIL);
	(void)argc;
	(void)argv;
	(void)envp;
	return (0);
}
