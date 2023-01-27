/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_game.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 23:37:07 by gael              #+#    #+#             */
/*   Updated: 2023/01/27 17:54:25 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_so_long.h"

void	ft_destroy_and_free(t_game *game, t_map *map)
{
	if (game->sprite_0 != NULL)
		mlx_destroy_image(game->mlx_ptr, game->sprite_0);
	if (game->sprite_1 != NULL)
		mlx_destroy_image(game->mlx_ptr, game->sprite_1);
	if (game->sprite_P != NULL)
		mlx_destroy_image(game->mlx_ptr, game->sprite_P);
	if (game->sprite_C != NULL)
		mlx_destroy_image(game->mlx_ptr, game->sprite_C);
	if (game->sprite_E != NULL)
		mlx_destroy_image(game->mlx_ptr, game->sprite_E);
	mlx_destroy_display(game->mlx_ptr);
	free(game->mlx_ptr);
	// free struct map
	exit (1); 
	(void)map;
}

void	ft_init_sprite(t_game *game, t_map *map)
{
	game->sprite_0 = NULL;
	game->sprite_0 = mlx_xpm_file_to_image(game->mlx_ptr, "./sprites/ground/xpm/water.xpm", &game->img_size, &game->img_size);
	if (game->sprite_0 == NULL)
		ft_destroy_and_free(game, map);
	game->sprite_1 = NULL;
	game->sprite_1 = mlx_xpm_file_to_image(game->mlx_ptr, "./sprites/ground/xpm/water.xpm", &game->img_size, &game->img_size);
	if (game->sprite_1 == NULL)
		ft_destroy_and_free(game, map);
	game->sprite_P = NULL;
	game->sprite_P = mlx_xpm_file_to_image(game->mlx_ptr, "./sprites/ground/xpm/water.xpm", &game->img_size, &game->img_size);
	if (game->sprite_P == NULL)
		ft_destroy_and_free(game, map);
	game->sprite_C = NULL;
	game->sprite_C = mlx_xpm_file_to_image(game->mlx_ptr, "./sprites/ground/xpm/water.xpm", &game->img_size, &game->img_size);
	if (game->sprite_C == NULL)
		ft_destroy_and_free(game, map);
	game->sprite_E = NULL;
	game->sprite_E = mlx_xpm_file_to_image(game->mlx_ptr, "./sprites/ground/xpm/water.xpm", &game->img_size, &game->img_size);
	if (game->sprite_E == NULL)
		ft_destroy_and_free(game, map);
}



int	ft_display_map(t_map *map, t_game *game)
{
	void	*img;

	(game->img_size) = 32;	
	(game->mlx_ptr) = mlx_init();
	game->win_ptr = mlx_new_window((game->mlx_ptr), 1080, 680, "so_long");
	
	if (game->mlx_ptr == NULL)
		return (FAIL);
	if (game->win_ptr == NULL)
		return (free(game->win_ptr), FAIL);

	ft_init_sprite(game, map);
	mlx_put_image_to_window((game->mlx_ptr), (game->win_ptr), game->sprite_0, 0, 0);
	usleep(3000000);
	
	mlx_destroy_window(game->mlx_ptr, game->win_ptr);
	mlx_destroy_display(game->mlx_ptr);
	
	return (free(game->mlx_ptr), SUCCESS);
	(void)img;
	(void)map;
}
