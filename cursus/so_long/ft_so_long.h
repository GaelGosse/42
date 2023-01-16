/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_so_long.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gael <gael@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 18:20:27 by gael              #+#    #+#             */
/*   Updated: 2023/01/15 23:26:58 by gael             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SO_LONG_H
# define FT_SO_LONG_H

# include <stdio.h>
# include <errno.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <sys/wait.h>
# include <unistd.h>
# include <string.h>
# include <fcntl.h>
# include "color.h"
# include "libft/libft.h"

# define SUCCESS 1
# define FAIL -1

typedef struct letters
{
	int	letter_c;
	int	letter_p;
	int	letter_e;
}		t_letters;

typedef struct map
{
	char		*map_to_build;
	char		**map_org;
	char		**map_chck;
	int			height;
	int			width;
	int			fd_map;
	t_letters	check_letters;
}				t_map;

/********************************** PARSING ***********************************/

// ft_check_format.C
int		ft_check_rectangular(t_map *map);
int		ft_nbr_letters(t_map *map);
int		ft_if_wall(t_map *map);

// ft_check_filemap.c
int		ft_read_file(t_map *map, char *filename);
int		ft_check_ext(char *filename);
void	ft_build_map(t_map *map);

// ft_so_long.c
int		parsing(t_map *map, int argc, char **argv, char **envp);
void	ft_print_map_s(char **tab);
void	ft_print_map_xl(char **tab);

// ft_valid_path.c
int		ft_propagation(t_map *map);
int		ft_replace_around(t_map *map, int ite_big, int ite_lil);
int		ft_valid_path(t_map *map);

/************************************ MLX *************************************/



#endif