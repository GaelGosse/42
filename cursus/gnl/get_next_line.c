/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gael <gael@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 15:01:17 by ggosse            #+#    #+#             */
/*   Updated: 2023/01/06 20:02:26 by gael             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "color.h"

int readfile(char *name)
{
	int    fd; 

	fd = open(name, O_RDONLY);
	if (fd == -1)
	{
		printf("open err\n");
		return (0);
	}
	get_next_line(fd);	
	if (close(fd) == -1)
	{
		printf("open err\n");
		return (0);
	}
	return (1);
}

void	ft_save(char *buf, char *line)
{
	int		i;
	int		j;

	j = 0;
	i = 0;
	while (buf[i] != '\n')
		i++;
	while (buf[i] != '\0')
		printf(red"%c", buf[i++]);
	(void)j;
	(void)line;
}

char	*get_next_line(int fd)
{
	printf(bold_green"\n\n --- Call: Get Next Line --- "reset"\n");

	static char	*line_to_print;
	char		*save;
	char		buf[BUF_SIZE + 1];
	int			ret;
	int			i;

	(void)save;
	line_to_print = NULL;
	if (fd < 0 || fd > 1024 || BUF_SIZE <= 0 || read(fd, 0, 0) < 0)
		return (NULL);
	i = 0;
	
	// ret = read(fd, buf, BUF_SIZE);
	// buf[ret] = '\0';

	if (ft_strlen(buf) != 0)
		line_to_print = ft_strdup(buf);
		
	while (ft_is_endline(buf) == 0)
	{
		ret = read(fd, buf, BUF_SIZE);
		if (ret < 0)
			return (NULL);
		buf[ret] = '\0';
		
		if (ret == 0)
		{
			return (line_to_print); // a2 longline, a4 null
		}
		if (line_to_print == NULL)
			line_to_print = ft_strdup(buf);
		else 
			line_to_print = ft_strjoin(line_to_print, buf);
		i++;
	}
	
	// printf(bold_yellow"line: "yellow"%s\n", line_to_print);
	ft_save(buf, line_to_print);
	// printf(bold_yellow"line: "yellow"%s\n", line);

	return (line_to_print);
}

int main()
{
	printf(back_green"\n----- ----- START ----- -----\n"reset);
	int	fd;




	printf("\n\n"back_green" --- a1.txt --- "reset"\n");
	fd = open("a1.txt", O_RDONLY);
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