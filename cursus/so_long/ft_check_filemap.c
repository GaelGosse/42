/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_filemap.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 19:41:09 by gael              #+#    #+#             */
/*   Updated: 2023/01/12 15:10:57 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_so_long.h"

int	ft_read_file(int fd)
{
	char	*buf;
	int		ret;

	buf = NULL;
	while (buf[0] != '\0')
	{
		ret = read(fd, buf, 1);
		if (ret < 0)
			return (FAIL);
		buf[1] = '\0';
	}
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

int	ft_existing_file(char *file)
{
	int	fd; 

	fd = open(file, O_RDONLY);
	if (fd == -1)
		return (ft_putstr_fd("file does not exist\n", 1), FAIL);
	// ft_read_file(fd);
	if (close(fd) == -1)
		return (ft_putstr_fd("close err\n", 1), FAIL);
	return (SUCCESS);
}