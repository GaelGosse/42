/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_game.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 23:37:07 by gael              #+#    #+#             */
/*   Updated: 2023/01/26 20:29:57 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_so_long.h"

int	ft_display_map(t_map *map, void **mlx_ptr, void **win_ptr)
{
	(*mlx_ptr) = mlx_init();
	(*win_ptr) = mlx_new_window((*mlx_ptr), 1080, 680, "so_long");
	
	if (*mlx_ptr == NULL)
		return (FAIL);
	if (*win_ptr == NULL)
		return (free(win_ptr), FAIL);

	usleep(5000000);
	
	mlx_destroy_window((*mlx_ptr), (*win_ptr));
	mlx_destroy_display((*mlx_ptr));
	
	return (free(*mlx_ptr), SUCCESS);
	(void)map;
}
