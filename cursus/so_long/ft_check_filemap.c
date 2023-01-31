/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_filemap.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 19:41:09 by gael              #+#    #+#             */
/*   Updated: 2023/01/31 18:21:50 by ggosse           ###   ########.fr       */
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
	game->map->map_org = ft_split(game->map->map_to_build, '\n');
	game->map->map_chck = ft_split(game->map->map_to_build, '\n');
	free(game->map->map_to_build);
	return (SUCCESS);
}

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
