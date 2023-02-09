/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_game.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 23:37:07 by gael              #+#    #+#             */
/*   Updated: 2023/02/09 16:54:03 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_so_long.h"

void	ft_put_images_to_win(t_game *game, int *ite_row, int *ite_col)
{
	if (game->map->map_org[(*ite_row)][(*ite_col)] == '0')
		mlx_put_image_to_window((game->mlibx), (game->window),
			game->img_0, (*ite_col) * 32, (*ite_row) * 32);
	else if (game->map->map_org[(*ite_row)][(*ite_col)] == '1')
		mlx_put_image_to_window((game->mlibx), (game->window),
			game->img_1, (*ite_col) * 32, (*ite_row) * 32);
	else if (game->map->map_org[(*ite_row)][(*ite_col)] == 'E')
		mlx_put_image_to_window((game->mlibx), (game->window),
			game->img_e, (*ite_col) * 32, (*ite_row) * 32);
	else if (game->map->map_org[(*ite_row)][(*ite_col)] == 'C')
		mlx_put_image_to_window((game->mlibx), (game->window),
			game->img_c, (*ite_col) * 32, (*ite_row) * 32);
	else if (game->map->map_org[(*ite_row)][(*ite_col)] == 'P')
		mlx_put_image_to_window((game->mlibx), (game->window),
			game->img_p, (*ite_col) * 32, (*ite_row) * 32);
}

void	ft_init_sprite(t_game *game)
{
	ft_init_img(game);
	game->img_0 = mlx_xpm_file_to_image(game->mlibx,
			"./sprites/water.xpm", &game->img_size, &game->img_size);
	if (game->img_0 == NULL)
		ft_destroy_and_free(game, "somthing wrong happened with sprites");
	game->img_1 = mlx_xpm_file_to_image(game->mlibx,
			"./sprites/rock.xpm", &game->img_size, &game->img_size);
	if (game->img_1 == NULL)
		ft_destroy_and_free(game, "somthing wrong happened with sprites");
	game->img_p = mlx_xpm_file_to_image(game->mlibx,
			"./sprites/ship_right.xpm", &game->img_size, &game->img_size);
	if (game->img_p == NULL)
		ft_destroy_and_free(game, "somthing wrong happened with sprites");
	game->img_c = mlx_xpm_file_to_image(game->mlibx,
			"./sprites/crystal.xpm", &game->img_size, &game->img_size);
	if (game->img_c == NULL)
		ft_destroy_and_free(game, "somthing wrong happened with sprites");
	game->img_e = mlx_xpm_file_to_image(game->mlibx,
			"./sprites/exit.xpm", &game->img_size, &game->img_size);
	if (game->img_e == NULL)
		ft_destroy_and_free(game, "somthing wrong happened with sprites");
}

void	ft_place_tiles(t_game *game)
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
			ft_put_images_to_win(game, &ite_row, &ite_col);
			ite_col++;
		}
		ite_row++;
	}
}

int	ft_event_listen(int key, t_game *game)
{
	if (key == 65307)
		ft_destroy_and_free(game, NULL);
	if (key == XK_w)
	{
		ft_move_w(game);
		ft_place_tiles(game);
	}
	else if (key == XK_s)
	{
		ft_move_s(game);
		ft_place_tiles(game);
	}
	else if (key == XK_a)
	{
		ft_move_a(game);
		ft_place_tiles(game);
	}
	else if (key == XK_d)
	{
		ft_move_d(game);
		ft_place_tiles(game);
	}
	return (0);
}

int	ft_display_map(t_game *game)
{
	(game->img_size) = 32;
	(game->mlibx) = mlx_init();
	game->window = mlx_new_window((game->mlibx),
			game->map->w * 32, game->map->h * 32, "so_long");
	if (game->mlibx == NULL)
		return (FAIL);
	if (game->window == NULL)
		return (free(game->window), FAIL);
	game->map->count_step = 1;
	ft_init_sprite(game);
	ft_place_tiles(game);
	ft_find_p(game);
	mlx_hook(game->window, DestroyNotify, StructureNotifyMask, \
	&ft_destroy_and_free2, game);
	mlx_hook(game->window, KeyPress, KeyPressMask, &ft_event_listen, game);
	mlx_loop(game->mlibx);
	ft_destroy_and_free(game, NULL);
	return (free(game->mlibx), SUCCESS);
}
