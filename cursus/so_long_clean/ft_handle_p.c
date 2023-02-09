/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 15:37:34 by ggosse            #+#    #+#             */
/*   Updated: 2023/02/07 15:38:00 by ggosse           ###   ########.fr       */
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
				break ;
			}
			ite_col++;
		}
		ite_row++;
	}
}

void	ft_remove_p(t_game *game)
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
				game->map->map_org[ite_row][ite_col] = '0';
				break ;
			}
			ite_col++;
		}
		ite_row++;
	}
}

void	ft_place_p(t_game *game, int new_y, int new_x)
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
			if (ite_col == new_x && ite_row == new_y)
			{
				game->map->p_x = ite_col;
				game->map->p_y = ite_row;
				game->map->map_org[ite_row][ite_col] = 'P';
				break ;
			}
			ite_col++;
		}
		ite_row++;
	}
}
