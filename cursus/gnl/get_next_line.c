/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 22:10:39 by gael              #+#    #+#             */
/*   Updated: 2022/07/21 16:03:29 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"


char	*get_next_line(int fd)
{
	static char	buf[BUF_SIZE + 1];
	char		*line;
	int			ret;

	if (fd < 0 || fd > 1024 || BUF_SIZE <= 0 || read(fd, 0, 0) < 0)
		return (NULL);
	line = NULL;
	if (ft_strlen(buf) != 0)
		line = ft_strdup(buf);
	while (!(ft_strchr(buf, '\n')))
	{
		ret = read(fd, buf, BUF_SIZE);
		if (ret < 0)	
			return (NULL);
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

/*
int main()
{
	// printf(back_green"\n----- ----- START ----- -----\n"reset);




	// printf("\n\n"back_green" --- a1.txt --- "reset"\n");
	// int	fd = open("a1.txt", O_RDONLY);
	// if (fd == -1)
	// 	return (printf("open err\n"), 0);
	// printf(bold_cyan"%s"reset"",get_next_line(fd));
	// printf(bold_cyan"%s"reset"",get_next_line(fd));
	// printf(bold_cyan"%s"reset"",get_next_line(fd));
	// printf(bold_cyan"%s"reset"",get_next_line(fd));
	// printf(bold_cyan"%s"reset"",get_next_line(fd));
	// printf(back_red"\n END "reset);
	// if (fd == -1)
	// 	return (printf("open err\n"), 0);




	// printf("\n\n"back_green" --- a2.txt --- "reset"\n");
	// fd = open("a2.txt", O_RDONLY);
	// if (fd == -1)
	// 	return (printf("open err\n"), 0);
	// printf(bold_cyan"%s\n"reset"",get_next_line(fd));
	// printf(back_red" END "reset);
	// if (fd == -1)
	// 	return (printf("open err\n"), 0);




	// printf("\n\n"back_green" --- a3.txt --- "reset"\n");
	int	fd = open("a3.txt", O_RDONLY);
	if (fd == -1)
		return (printf("open err\n"), 0);
	get_next_line(fd);
	get_next_line(fd);
	get_next_line(fd);
	get_next_line(fd);
	get_next_line(fd);
	// printf(bold_cyan"%s\n"reset"",get_next_line(fd));
	// printf(bold_cyan"%s\n"reset"",get_next_line(fd));
	// printf(bold_cyan"%s\n"reset"",get_next_line(fd));
	// printf(bold_cyan"%s\n"reset"",get_next_line(fd));
	// printf(bold_cyan"%s\n"reset"",get_next_line(fd));
	// printf(bold_cyan"%s\n"reset"",get_next_line(fd));
	// printf(bold_cyan"%s\n"reset"",get_next_line(fd));
	// printf(bold_cyan"%s\n"reset"",get_next_line(fd));
	// printf(bold_cyan"%s\n"reset"",get_next_line(fd));
	// printf(back_red" END "reset);
	if (fd == -1)
		return (printf("open err\n"), 0);


	// int	fd = open("a4.txt", O_RDONLY);
	// if (fd == -1)
	// 	return (printf("open err\n"), 0);
	// printf("\n\n"back_green" --- a4.txt --- "reset"\n");
	// printf(bold_cyan"%s\n"reset"",get_next_line(fd));
	
	// printf("\n");
}
*/