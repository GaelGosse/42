/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 22:10:39 by gael              #+#    #+#             */
/*   Updated: 2022/07/15 14:34:34 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"


char	*get_next_line(int fd)
{
	printf(bold_green"\n\n --- Call: Get Next Line --- "reset"\n");

	static char	*save;
	char		*line;
	char		buf[BUF_SIZE + 1];
	int			ret;

	line = NULL;
	line = ft_strdup(buf);
	if (fd < 0 || fd > 1024 || BUF_SIZE <= 0 || read(fd, 0, 0) < 0)
		return (NULL);

	while (ft_is_endline(buf) == 0)
	{
		ret = read(fd, buf, BUF_SIZE);
		if (ret < 0)	
			return (NULL);
		line = ft_strjoin(line, buf);
	}
	save = NULL;
	(void)save;

	return (line); 
}

int main()
{
	printf(back_green"\n----- ----- START ----- -----\n"reset);




	printf("\n\n"back_green" --- a1.txt --- "reset"\n");
	int	fd = open("a1.txt", O_RDONLY);
	if (fd == -1)
		return (printf("open err\n"), 0);
	printf(bold_cyan"%s\n"reset"",get_next_line(fd));
	printf(bold_cyan"%s\n"reset"",get_next_line(fd));
	printf(bold_cyan"%s\n"reset"",get_next_line(fd));
	printf(bold_cyan"%s\n"reset"",get_next_line(fd));
	printf(back_red"\n END "reset);
	if (fd == -1)
		return (printf("open err\n"), 0);




	// printf("\n\n"back_green" --- a2.txt --- "reset"\n");
	// fd = open("a2.txt", O_RDONLY);
	// if (fd == -1)
	// 	return (printf("open err\n"), 0);
	// printf(bold_cyan"%s\n"reset"",get_next_line(fd));
	// printf(back_red" END "reset);
	// if (fd == -1)
	// 	return (printf("open err\n"), 0);




	// printf("\n\n"back_green" --- a3.txt --- "reset"\n");
	// fd = open("a3.txt", O_RDONLY);
	// if (fd == -1)
	// 	return (printf("open err\n"), 0);
	// printf(bold_cyan"%s\n"reset"",get_next_line(fd));
	// printf(bold_cyan"%s\n"reset"",get_next_line(fd));
	// printf(bold_cyan"%s\n"reset"",get_next_line(fd));
	// printf(bold_cyan"%s\n"reset"",get_next_line(fd));
	// printf(back_red" END "reset);
	// if (fd == -1)
	// 	return (printf("open err\n"), 0);



	// printf("\n\n"back_green" --- a4.txt --- "reset"\n");
	// get_next_line(fd);
	
	printf("\n");
}