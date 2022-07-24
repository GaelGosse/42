/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 22:10:39 by gael              #+#    #+#             */
/*   Updated: 2022/07/24 18:14:14 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"


char	*get_next_line(int fd)
{
	static char	buf[BUFFER_SIZE + 1];
	char		*line;
	int			ret;

	if (fd < 0 || fd > 1024 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
		return (NULL);
	line = NULL;
	if (ft_strlen(buf) != 0)
		line = ft_strdup(buf);
	while (!(ft_strchr(buf, '\n')))
	{
		ret = read(fd, buf, BUFFER_SIZE);
		if (ret < 0)
			return (free(line), NULL);
		buf[ret] = '\0';
		if (ret == 0)
			return (ft_strjoin(line, buf));
		if (line == NULL)
			line = ft_strdup(buf);
		else
			line = ft_strjoin(line, buf);
	}
	if(!line[0])
		return (free(line), NULL);
	return (ft_save(line, buf), line); 
}
