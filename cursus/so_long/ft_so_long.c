/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_so_long.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gael <gael@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 18:16:46 by gael              #+#    #+#             */
/*   Updated: 2023/01/22 09:30:56 by gael             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_so_long.h"

void	ft_print_map_s(char **tab)
{
	int	ite_print_str;
	int	ite_print_chr;

	ite_print_str = 0;
	ite_print_chr = 0;
	while (tab[ite_print_str])
	{
		ite_print_chr = 0;
		while (tab[ite_print_str][ite_print_chr])
		{
			if (tab[ite_print_str][ite_print_chr] == '1')
				printf(BACK_WHITE"%c"RST, tab[ite_print_str][ite_print_chr]);
			if (tab[ite_print_str][ite_print_chr] == '0')
				printf(" ");
			if (tab[ite_print_str][ite_print_chr] == 'E')
				printf(BACK_GREEN"%c"RST, tab[ite_print_str][ite_print_chr]);
			if (tab[ite_print_str][ite_print_chr] == 'C')
				printf(BACK_YELLOW"%c"RST, tab[ite_print_str][ite_print_chr]);
			if (tab[ite_print_str][ite_print_chr] == 'P')
				printf(BACK_RED"%c"RST, tab[ite_print_str][ite_print_chr]);
			ite_print_chr++;
		}
		printf("\n");
		ite_print_str++;
	}
}

void	ft_print_map_xl(char **tab)
{
	int	ite_print_str;
	int	ite_print_chr;

	ite_print_str = 0;
	ite_print_chr = 0;
	while (tab[ite_print_str])
	{
		ite_print_chr = 0;
		while (tab[ite_print_str][ite_print_chr])
		{
			if (tab[ite_print_str][ite_print_chr] == '1')
				printf(BACK_WHITE" %c "RST, tab[ite_print_str][ite_print_chr]);
			if (tab[ite_print_str][ite_print_chr] == '0')
				printf("   ");
			if (tab[ite_print_str][ite_print_chr] == 'E')
				printf(BACK_GREEN" %c "RST, tab[ite_print_str][ite_print_chr]);
			if (tab[ite_print_str][ite_print_chr] == 'C')
				printf(BACK_YELLOW" %c "RST, tab[ite_print_str][ite_print_chr]);
			if (tab[ite_print_str][ite_print_chr] == 'P')
				printf(BACK_RED" %c "RST, tab[ite_print_str][ite_print_chr]);
			ite_print_chr++;
		}
		printf("\n");
		ite_print_str++;
	}
}

int	parsing(t_map *map, int argc, char **argv, char **envp)
{
	map->check_letters.letter_c = 0;
	map->check_letters.letter_e = 0;
	map->check_letters.letter_p = 0;
	if (ft_check_ext(argv[1]) == FAIL)
		return (printf("wrong filename extension\n"), FAIL);
	if (ft_read_file(map, argv[1]) == FAIL)
		return (printf("file does not exist\n"), FAIL);
	if (ft_check_rectangular(map) == FAIL)
		return (FAIL);
	if (ft_nbr_letters(map) == FAIL)
		return (FAIL);
	if (ft_if_wall(map) == FAIL)
		return (printf("there are some leaks on walls\n"), FAIL);
	if (ft_wrong_letters(map) == FAIL)
		return (printf("Letters allowed on your map : P, C, E, 0, 1\n"), FAIL);
	ft_valid_path(map);
	return (SUCCESS);
	(void)argc;
	(void)envp;
}

int	ft_create_game(t_map *map)
{
	ft_display_map(map);
	return (1);
	(void)map;
}

int	main(int argc, char **argv, char **envp)
{
	t_map	map;

	if (parsing(&map, argc, argv, envp) == FAIL)
		return (1);
	ft_create_game(&map);
	printf(PURPLE"map.height: %i"RESET"\n", map.height);
	printf(PURPLE"map.width: %i"RESET"\n", map.width);
	(void)argc;
	(void)argv;
	(void)envp;
	return (0);
}


// \n too much
// 2 maps in one map




/*

EXT .ber
read map
is rectangular


*/