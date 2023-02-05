/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_game.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 23:37:07 by gael              #+#    #+#             */
/*   Updated: 2023/02/05 09:22:25 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_so_long.h"

void	ft_free_tab_str(char **tab_str)
{
	int	ite_free_two;

	ite_free_two = -1;
	while (tab_str[++ite_free_two])
		free(tab_str[ite_free_two]);
	free(tab_str);
}

void	ft_destroy_and_free(t_game *game)
{
	if (game->img_0)
		mlx_destroy_image(game->mlibx, game->img_0);
	if (game->img_1)
		mlx_destroy_image(game->mlibx, game->img_1);
	if (game->img_p)
		mlx_destroy_image(game->mlibx, game->img_p);
	if (game->img_c)
		mlx_destroy_image(game->mlibx, game->img_c);
	if (game->img_e)
		mlx_destroy_image(game->mlibx, game->img_e);
	if (game->window)
		mlx_destroy_window(game->mlibx, game->window);
	if (game->window)
		mlx_destroy_display(game->mlibx);
	free(game->mlibx);
	ft_free_tab_str(game->map->map_chck);
	ft_free_tab_str(game->map->map_org);
	exit (1);
}

void	ft_init_sprite(t_game *game)
{
	game->img_0 = 0;
	game->img_1 = 0;
	game->img_p = 0;
	game->img_c = 0;
	game->img_e = 0;
	game->img_0 = mlx_xpm_file_to_image(game->mlibx,
		"./sprites/ground/xpm/water.xpm", &game->img_size, &game->img_size);
	if (game->img_0 == NULL)
		ft_destroy_and_free(game);
	game->img_1 = mlx_xpm_file_to_image(game->mlibx,
		"./sprites/rocks/xpm/rock4_water.xpm", &game->img_size, &game->img_size);
	if (game->img_1 == NULL)
		ft_destroy_and_free(game);
	game->img_p = mlx_xpm_file_to_image(game->mlibx,
		"./sprites/player/xpm/right/ship_r_water.xpm", &game->img_size, &game->img_size);
	if (game->img_p == NULL)
		ft_destroy_and_free(game);
	game->img_c = mlx_xpm_file_to_image(game->mlibx,
		"./sprites/crystals/xpm/crystal1_on_water.xpm", &game->img_size, &game->img_size);
	if (game->img_c == NULL)
		ft_destroy_and_free(game);
	game->img_e = mlx_xpm_file_to_image(game->mlibx,
		"./sprites/ground/xpm/shadow_center.xpm", &game->img_size, &game->img_size);
	if (game->img_e == NULL)
		ft_destroy_and_free(game);
}

void	ft_place_tiles(t_game *game, char **tab)
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
			if (game->map->map_org[ite_row][ite_col] == '0')
				mlx_put_image_to_window((game->mlibx), (game->window), game->img_0, ite_col * 32, ite_row * 32);
			else if (game->map->map_org[ite_row][ite_col] == '1')
				mlx_put_image_to_window((game->mlibx), (game->window), game->img_1, ite_col * 32, ite_row * 32);
			else if (game->map->map_org[ite_row][ite_col] == 'E')
				mlx_put_image_to_window((game->mlibx), (game->window), game->img_e, ite_col * 32, ite_row * 32);
			else if (game->map->map_org[ite_row][ite_col] == 'C')
				mlx_put_image_to_window((game->mlibx), (game->window), game->img_c, ite_col * 32, ite_row * 32);
			else if (game->map->map_org[ite_row][ite_col] == 'P')
				mlx_put_image_to_window((game->mlibx), (game->window), game->img_p, ite_col * 32, ite_row * 32);
			ite_col++;
		}
		ite_row++;
	}
	(void)tab;
}

int event_listen(int key, t_game *game)
{
	if (key == XK_w)
	{
		ft_move_w(game);
		ft_place_tiles(game, game->map->map_org);
	}
	else if (key == XK_s)
	{
		ft_move_s(game);
		ft_place_tiles(game, game->map->map_org);
	}
	else if (key == XK_a)
	{
		ft_move_a(game);
		ft_place_tiles(game, game->map->map_org);
	}
	else if (key == XK_d)
	{
		ft_move_d(game);
		ft_place_tiles(game, game->map->map_org);
	}
	return (0);
	(void)key;
	(void)game;
}

int	ft_display_map(t_game *game)
{
	(game->img_size) = 32;
	(game->mlibx) = mlx_init();
	game->window = mlx_new_window((game->mlibx), game->map->w * 32, game->map->h * 32, "so_long");
	if (game->mlibx == NULL)
		return (FAIL);
	if (game->window == NULL)
		return (free(game->window), FAIL);
	game->map->count_step = 0;
	ft_init_sprite(game);
	ft_place_tiles(game, game->map->map_org);
	ft_find_p(game);
	mlx_hook(game->window, KeyPress, KeyPressMask, &event_listen, game);
	mlx_loop(game->mlibx);
	ft_destroy_and_free(game);
	return (free(game->mlibx), SUCCESS);
}
