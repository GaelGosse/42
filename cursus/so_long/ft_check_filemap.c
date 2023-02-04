/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_filemap.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 19:41:09 by gael              #+#    #+#             */
/*   Updated: 2023/02/04 23:22:03 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_so_long.h"

int	ft_buf_read(int fd, t_game *game)
{
	char	buf[2];
	int		ret;

	buf[0] = 'X';
	buf[1] = '\0';
	if (fd < 0 || fd > 1024 || read(fd, 0, 0) < 0)
		return (FAIL);
	game->map->map_to_build = NULL;
	while (buf[0] != '\0')
	{
		ret = read(fd, buf, 1);
		if (ret < 0)
			return (FAIL);
		buf[ret] = '\0';
		buf[1] = '\0';
		if (!game->map->map_to_build)
			game->map->map_to_build = ft_strdup(buf);
		else
			game->map->map_to_build = ft_strjoin(game->map->map_to_build, buf);
	}
	// ft_check_map(game->map->map_to_build);
	game->map->map_org = ft_split(game->map->map_to_build, '\n');
	game->map->map_chck = ft_split(game->map->map_to_build, '\n');
	return (free(game->map->map_to_build), SUCCESS);
}

// int	ft_check_map(char *str)
// {
// 	int	ite_backslash_1;

// 	ite_backslash_1 = 0;
// 	while (str[ite_backslash_1])
// 	{
// 		if (str[ite_backslash_1] == '\n' )
// 			printf("\n");
// 	}
// }

int	ft_read_file(t_game *game, char *filename)
{
	int		fd;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (ft_putstr_fd("file does not exist\n", 1), FAIL);
	ft_buf_read(fd, game);
	if (close(fd) == -1)
		return (ft_putstr_fd("close err\n", 1), FAIL);
	return (SUCCESS);
}

int	ft_check_ext(char *filename)
{
	int	len;

	len = (ft_strlen(filename) - 1);
	if (filename[len] == 'r'
		&& filename[len - 1] == 'e'
		&& filename[len - 2] == 'b'
		&& filename[len - 3] == '.')
		return (SUCCESS);
	return (FAIL);
}
