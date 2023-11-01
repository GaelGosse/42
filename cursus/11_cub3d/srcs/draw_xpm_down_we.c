/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_xpm_down_we.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gael <gael@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 21:57:47 by gael              #+#    #+#             */
/*   Updated: 2023/08/07 01:04:01 by gael             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3D.h"

void	draw_xpm_down_we(t_game *game, int i_midline)
{
	double	act_y;
	double	perc_x;
	double	perc_y;

	perc_x = (double)((int)roundf(game->fov->wall_witch[i_midline][1]) % \
	game->img_size) / (double)game->img_size;
	act_y = game->line_3d->corr_y - ((game->win_height / 2));
	perc_y = (game->line_3d->steps + act_y) / (game->line_3d->steps * 2);
	if (game->xpm->we_metadata[2] <= 92)
		perc_x = (int)roundf(perc_x * game->xpm->we_width_height);
	else
		perc_x = (int)roundf(perc_x * game->xpm->we_width_height * 2);
	perc_y = (int)roundf(perc_y * game->xpm->we_width_height);
	img_pix_put(game, roundf(game->line_3d->corr_x), \
	roundf(game->line_3d->corr_y), draw_xpm_we_color(game, perc_x, perc_y));
}

int	draw_xpm_we_color(t_game *g, int x, int y)
{
	int	i;
	int	color;

	color = 0;
	i = 0;
	while (i < g->xpm->we_tab_start)
	{
		if (g->xpm->we_metadata[2] <= 92 && y <= g->xpm->we_width_height && \
		g->xpm->we_colors[i][0] == \
		g->xpm->we_tab_file[y + g->xpm->we_tab_start][x])
				color = get_color(g->xpm->we_colors[i][1], \
				g->xpm->we_colors[i][2], g->xpm->we_colors[i][3]);
		if (g->xpm->we_metadata[2] > 92 && y <= g->xpm->we_width_height \
		&& g->xpm->we_colors[i][0] == g->xpm->we_tab_file[y + \
		g->xpm->we_tab_start][x] && g->xpm->we_colors[i][1] == \
		g->xpm->we_tab_file[y + g->xpm->we_tab_start][x + 1])
			color = get_color(g->xpm->we_colors[i][2], \
			g->xpm->we_colors[i][3], g->xpm->we_colors[i][4]);
		i++;
	}
	return (color);
}
