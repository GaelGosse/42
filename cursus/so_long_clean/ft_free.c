/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 19:29:27 by ggosse            #+#    #+#             */
/*   Updated: 2023/02/06 19:33:28 by ggosse           ###   ########.fr       */
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
	free(game->map);
	exit (1);
}

void	ft_free_parsing(t_game *game, char *err)
{
	if (err)
		ft_putstr_fd(str, 2);
	if (game->map->map_to_build)
		free(game->map->map_to_build);
	if (game->map->map_org)
		
}