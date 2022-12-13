/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 10:32:56 by ggosse            #+#    #+#             */
/*   Updated: 2022/12/13 16:23:21 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pipex.h"


void	ft_error(void)
{
	write(1, "Error\n", 6);
}

void	ft_check(int argc, char **argv)
{
	printf(RED"ft_check\n"RST);

	int	ite_nbr_cmd;

	ite_nbr_cmd = 3;
	if (access(argv[1], F_OK) == 0)
	{
		printf("exec first cmd argv[2]\n");
	}
	// bonus
	// if (argc > 5)
	// {
	// 	while (ite_nbr_cmd != (argc - 2))
	// 	{
	// 		printf(GREEN"argv[ite_nbr_cmd]: %s\n"RST, argv[ite_nbr_cmd]);
	// 		ite_nbr_cmd++;
	// 	}
	// }
	if (access(argv[argc - 1], F_OK) == 0)
	{
		printf("exec first cmd argv[%i]\n", (argc - 1));
	}
	(void)argv;
}

void	ft_pipex(int argc, char **argv)
{
	printf(RED"ft_pipex\n"RST);

	ft_check(argc, argv);
	(void)argv;
}

int main(int argc, char **argv){
	char	*str;
	int		nbr;

	if (argc < 5)
		return (ft_error(), 1);
	ft_pipex(argc, argv);
	(void)argc;
	(void)argv;
	(void)str;
	(void)nbr;
}