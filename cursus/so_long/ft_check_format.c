/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gael <gael@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 12:07:15 by gael              #+#    #+#             */
/*   Updated: 2023/01/15 01:18:02 by gael             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_so_long.h"

int	ft_check_rectangular(t_map *map)
{
	int	ite_check1;
	int	prev;

	ite_check1 = -1;
	prev = ft_strlen(map->map_org[ite_check1 + 1]);
	while (map->map_org[++ite_check1])
	{
		if (prev != (int)ft_strlen(map->map_org[ite_check1]))
			return (printf("line too long\n"), FAIL);
		prev = ft_strlen(map->map_org[ite_check1]);
	}
	map->height = ite_check1;
	map->width = prev;
	if (prev == ite_check1)
		return (printf("map must be rectangular\n"), FAIL);
	return (SUCCESS);
}

int	ft_nbr_letters(t_map *map)
{
	int	ite_letter1;
	int	ite_letter2;

	ite_letter1 = -1;
	while (map->map_org[++ite_letter1])
	{
		ite_letter2 = -1;
		while (map->map_org[ite_letter1][++ite_letter2])
		{
			if (map->map_org[ite_letter1][ite_letter2] == 'C')
				map->check_letters.letter_c++;
			else if (map->map_org[ite_letter1][ite_letter2] == 'E')
				map->check_letters.letter_e++;
			else if (map->map_org[ite_letter1][ite_letter2] == 'P')
				map->check_letters.letter_p++;
		}
	}
	if (map->check_letters.letter_c == 0)
		return (printf("your map must contain at least one C \n"), FAIL);
	if (map->check_letters.letter_e != 1)
		return (printf("letter E is lacking on your map\n"), FAIL);
	if (map->check_letters.letter_p != 1)
		return (printf("letter P is lacking on your map\n"), FAIL);
	return (SUCCESS);
}

int	ft_if_wall(t_map *map)
{
	int	ite_wall1;
	int	ite_wall2;

	ite_wall1 = -1;
	while (map->map_org[++ite_wall1])
	{
		ite_wall2 = -1;
		while (map->map_org[ite_wall1][++ite_wall2])
		{
			if ((ite_wall1 == 0 || ite_wall1 == map->height - 1)
				&& map->map_org[ite_wall1][ite_wall2] != '1')
				return (FAIL);
			if ((ite_wall2 == 0 || ite_wall2 == map->width - 1)
				&& map->map_org[ite_wall1][ite_wall2] != '1')
				return (FAIL);
		}
	}
	return (SUCCESS);
}
