/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_game.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 23:37:07 by gael              #+#    #+#             */
/*   Updated: 2023/01/28 19:40:44 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_so_long.h"

void	ft_destroy_and_free(t_game *game, t_map *map)
{
	if (game->img_0 != NULL)
		mlx_destroy_image(game->mlibx, game->img_0);
	if (game->img_1 != NULL)
		mlx_destroy_image(game->mlibx, game->img_1);
	if (game->img_p != NULL)
		mlx_destroy_image(game->mlibx, game->img_p);
	if (game->img_c != NULL)
		mlx_destroy_image(game->mlibx, game->img_c);
	if (game->img_e != NULL)
		mlx_destroy_image(game->mlibx, game->img_e);
	mlx_destroy_display(game->mlibx);
	free(game->mlibx);
	// free struct map
	exit (1); 
	(void)map;
}

void	ft_init_sprite(t_game *game, t_map *map)
{
	game->img_0 = NULL;
	game->img_0 = mlx_xpm_file_to_image(game->mlibx, "./sprites/ground/xpm/water.xpm", &game->img_size, &game->img_size);
	if (game->img_0 == NULL)
		ft_destroy_and_free(game, map);
	game->img_1 = NULL;
	game->img_1 = mlx_xpm_file_to_image(game->mlibx, "./sprites/rocks/xpm/rock4.xpm", &game->img_size, &game->img_size);
	if (game->img_1 == NULL)
		ft_destroy_and_free(game, map);
	game->img_p = NULL;
	game->img_p = mlx_xpm_file_to_image(game->mlibx, "./sprites/player/xpm/ship1.xpm", &game->img_size, &game->img_size);
	if (game->img_p == NULL)
		ft_destroy_and_free(game, map);
	game->img_c = NULL;
	game->img_c = mlx_xpm_file_to_image(game->mlibx, "./sprites/crystals/xpm/crystal1.xpm", &game->img_size, &game->img_size);
	if (game->img_c == NULL)
		ft_destroy_and_free(game, map);
	game->img_e = NULL;
	game->img_e = mlx_xpm_file_to_image(game->mlibx, "./sprites/player/xpm/shadow_rl.xpm", &game->img_size, &game->img_size);
	if (game->img_e == NULL)
		ft_destroy_and_free(game, map);
}

void	ft_place_tiles(t_game *game, t_map *map)
{
	int	ite_row;
	int	ite_col;

	ite_row = -1;
	ite_col = -1;
	ft_init_sprite(game, map);
	while (map->map_org[++ite_row])
	{
		ite_col = -1;
		while (map->map_org[ite_row][++ite_col])
		{
			if (map->map_org[ite_row][ite_col] == '0')
				mlx_put_image_to_window((game->mlibx), (game->window), game->img_0, ite_col*32, ite_row*32);
			else if (map->map_org[ite_row][ite_col] == '1')
				mlx_put_image_to_window((game->mlibx), (game->window), game->img_1, ite_col*32, ite_row*32);
			else if (map->map_org[ite_row][ite_col] == 'E')
				mlx_put_image_to_window((game->mlibx), (game->window), game->img_e, ite_col*32, ite_row*32);
			else if (map->map_org[ite_row][ite_col] == 'C')
				mlx_put_image_to_window((game->mlibx), (game->window), game->img_c, ite_col*32, ite_row*32);
			else if (map->map_org[ite_row][ite_col] == 'P')
				mlx_put_image_to_window((game->mlibx), (game->window), game->img_p, ite_col*32, ite_row*32);
		}
	}
	(void)ite_row;
	(void)ite_col;
}

void	*event_listen(int key, t_game *game)
{
	printf(RED"event here\n"RESET);
	return (0);
	(void)key;
	(void)game;
}

int	ft_display_map(t_game *game, t_map *map)
{
	void	*img;

	(game->img_size) = 32;
	(game->mlibx) = mlx_init();
	game->window = mlx_new_window((game->mlibx), map->w*32, map->h*32, "so_long");

	if (game->mlibx == NULL)
		return (FAIL);
	if (game->window == NULL)
		return (free(game->window), FAIL);

	ft_place_tiles(game, map);
	// ft_init_sprite(game, map);
	// mlx_put_image_to_window((game->mlibx), (game->window), game->img_0, 0, 0);
	// usleep(3000000);
	mlx_hook(game->window,KeyPress, KeyPressMask, &event_listen, &game);
	
	mlx_destroy_window(game->mlibx, game->window);
	mlx_destroy_display(game->mlibx);
	
	return (free(game->mlibx), SUCCESS);
	(void)img;
	(void)map;
}
