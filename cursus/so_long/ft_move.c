/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 19:23:13 by ggosse            #+#    #+#             */
/*   Updated: 2023/02/02 20:32:43 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_so_long.h"

void	ft_find_p(t_game *game)
{
	int	ite_row;
	int	ite_col;

	ite_row = 0;
	ite_col = 0;
	while (game->map->map_org[ite_row])
	{
		ite_col = 0;
		while (game->map->map_org[ite_row][ite_col])
		{
			if (game->map->map_org[ite_row][ite_col] == 'P')
			{
				game->map->p_x = ite_col;
				game->map->p_y = ite_row;
				break;
			}
			ite_col++;
		}
		ite_row++;
	}
}

void	ft_move_w(t_game *game)
{
	printf("move_w\n");
	(void)game;
}
void	ft_move_s(t_game *game)
{
	printf("move_s\n");
	(void)game;
}
void	ft_move_a(t_game *game)
{
	printf("move_a\n");
	(void)game;
}
void	ft_move_d(t_game *game)
{
	printf("move_d\n");
	(void)game;
}
