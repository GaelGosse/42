/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_so_long.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 18:16:46 by gael              #+#    #+#             */
/*   Updated: 2023/02/05 04:58:44 by ggosse           ###   ########.fr       */
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

int	ft_parsing(t_game *game, int argc, char **argv, char **envp)
{
	game->map = malloc(sizeof(t_map));
	if (!game->map)
		return (0);
	game->map->check_letters.letter_c = 0;
	game->map->check_letters.letter_e = 0;
	game->map->check_letters.letter_p = 0;
	if (ft_check_ext(argv[1]) == FAIL)
		return (printf("wrong filename extension\n"), FAIL);
	if (ft_read_file(game, argv[1]) == FAIL)
		return (FAIL);
	if (ft_check_rectangular(game) == FAIL)
		return (FAIL);
	if (ft_nbr_letters(game) == FAIL)
		return (FAIL);
	if (ft_if_wall(game) == FAIL)
		return (printf("there are some leaks on walls\n"), FAIL);
	if (ft_wrong_letters(game) == FAIL)
		return (printf("Letters allowed on your map : P, C, E, 0, 1\n"), FAIL);
	ft_valid_path(game);
	return (SUCCESS);
	(void)argc;
	(void)envp;
}

int	ft_create_game(t_game *game)
{
	ft_display_map(game);
	return (1);
}

int	main(int argc, char **argv, char **envp)
{
	t_game	game;

	if (argc != 2)
		return (ft_putstr_fd("you must called one arg\n", 1), 1);
	if (ft_parsing(&game, argc, argv, envp) == FAIL)
		return (1);
	ft_create_game(&game);
	printf(PURPLE"game.map->h: %i"RESET"\n", game.map->h);
	printf(PURPLE"game.map->w: %i"RESET"\n", game.map->w);
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