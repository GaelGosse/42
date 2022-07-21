/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gael <gael@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 22:10:39 by gael              #+#    #+#             */
/*   Updated: 2022/07/20 14:40:20 by gael             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"


char	*get_next_line(int fd)
{
	// printf(bold_green"\n\n --- Call: Get Next Line --- "reset"\n");

	static char	buf[BUF_SIZE + 1];
	char		*line;
	int			ret;
	int			i = 0;

	if (fd < 0 || fd > 1024 || BUF_SIZE <= 0 || read(fd, 0, 0) < 0)
		return (NULL);
	line = NULL;
	line = ft_strjoin(line, buf);
	ret = BUF_SIZE;
	
	// printf(bold_red"line: %s\n"reset, line);
	while (ft_is_endline(buf) == 0 || ret != BUF_SIZE)
	{
		line = ft_strjoin(line, buf);
		// printf(bold_yellow"tour%i line: %s\n"reset, i, line);
		ret = read(fd, buf, BUF_SIZE);
		if (ret < 0)	
			return (NULL);
		buf[ret] = '\0';
		// printf(yellow"tour%i line: %s\n"reset, i, line);
		// printf(bold_purple"buf: %s\n"reset, buf);
		if (i > 6)
			break;
		i++;
		// printf("\n");
	}
	line = ft_strjoin(line, buf);
	if(!line[0])
		free(line);
	else
		ft_save(line, buf);

	return (line); 
}

int main()
{
	// printf(back_green"\n----- ----- START ----- -----\n"reset);




	// printf("\n\n"back_green" --- a1.txt --- "reset"\n");
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