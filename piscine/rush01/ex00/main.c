/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 18:16:36 by ggosse            #+#    #+#             */
/*   Updated: 2022/03/20 22:05:24 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		**init_tab(char	*str);
void	aff_tab(int	**tab);
void	safe_rules(int	**tab);

int	main(int argc, char **argv)
{
	int	**tab;

	if (argc == 2)
	{
		tab = init_tab(argv[1]);
		safe_rules(tab);
		aff_tab(tab);
	}
	return (0);
}
