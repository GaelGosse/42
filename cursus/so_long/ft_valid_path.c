/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_valid_path.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 22:37:27 by gael              #+#    #+#             */
/*   Updated: 2023/01/16 17:41:54 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_so_long.h"

int	ft_propagation(t_map *map)
{
	int	ite_propa1;
	int	ite_propa2;
	int	counter_p;
	int	fail;

	fail = 0;
	counter_p = 0;
	ite_propa1 = -1;
	while (map->map_chck[++ite_propa1])
	{
		ite_propa2 = -1;
		while (map->map_chck[ite_propa1][++ite_propa2])
		{
			if (map->map_chck[ite_propa1][ite_propa2] == 'P')
			{
				if (ft_replace_around(map, ite_propa1, ite_propa2) == FAIL)
					fail++;
				ft_replace_around(map, ite_propa1, ite_propa2);
				counter_p++;
			}
		}
	}
	if (counter_p != fail)
		return (FAIL);
	return (SUCCESS);
}

int	ft_check_collectibles(t_map *map)
{
	int	ite_collect1;
	int	ite_collect2;

	ite_collect1 = -1;
	while (map->map_chck[++ite_collect1])
	{
		ite_collect2 = -1;
		while (map->map_chck[ite_collect1][++ite_collect2])
		{
			if (map->map_chck[ite_collect1][ite_collect2] == 'C')
				return (printf("Invalid path to C and E\n"), FAIL);
		}
	}
	return (SUCCESS);
}

int	ft_valid_path(t_map *map)
{
	while (ft_propagation(map) == FAIL)
	{
		ft_propagation(map);
	}
	return (ft_check_collectibles(map));
}

int	ft_replace_around(t_map *map, int ite_big, int ite_lil)
{
	if (map->map_chck[ite_big][ite_lil + 1] == '0'
	|| map->map_chck[ite_big][ite_lil + 1] == 'C')
	{
		map->map_chck[ite_big][ite_lil + 1] = 'P';
		return (SUCCESS);
	}
	else if (map->map_chck[ite_big][ite_lil - 1] == '0'
	|| map->map_chck[ite_big][ite_lil - 1] == 'C')
	{
		map->map_chck[ite_big][ite_lil - 1] = 'P';
		return (SUCCESS);
	}
	else if (map->map_chck[ite_big + 1][ite_lil] == '0'
	|| map->map_chck[ite_big + 1][ite_lil] == 'C')
	{
		map->map_chck[ite_big + 1][ite_lil] = 'P';
		return (SUCCESS);
	}
	else if (map->map_chck[ite_big - 1][ite_lil] == '0'
	|| map->map_chck[ite_big - 1][ite_lil] == 'C')
	{
		map->map_chck[ite_big - 1][ite_lil] = 'P';
		return (SUCCESS);
	}
	return (FAIL);
}
