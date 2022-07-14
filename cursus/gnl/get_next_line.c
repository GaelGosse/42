/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gael <gael@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 15:01:17 by ggosse            #+#    #+#             */
/*   Updated: 2022/07/13 21:23:21 by gael             ###   ########.fr       */
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

char	*get_next_line(int fd)
{
	static char	*line;
	char		buf[BUF_SIZE + 1];
	int			ret;
	int			i;

	i = 0;
	line = NULL;
	// ret = read(fd, buf, BUF_SIZE);
	// buf[ret] = '\0';

	if (ft_strlen(buf) != 0)
		line = buf;
		
	if (ft_is_endline(buf) > 0)
	{
		printf(yellow"\n%s"reset, buf);
		// printf(cyan"\nret: %i\n"reset, ret);
		return (line);
	}

	while (ft_is_endline(buf) == 0)
	{
		// printf(yellow"in while\n"reset);
		printf(red"%s"reset, line);

		ret = read(fd, buf, BUF_SIZE);
		buf[ret] = '\0';
		if (ret == 0)
		{
			return (line); // a2 a4
		}
		i++;
	}
	// if (ret > 0)  do keep line
	// printf(purple"%s"reset, buf);
	line = ft_strjoin(buf, ft_printf_save(buf));

	return (line);
}

int main()
{
	printf(bold_green"\n----- ----- START ----- -----\n"reset);
	
	printf("\n\n"back_green" --- a1.txt --- "reset"\n");
	readfile("a1.txt");
	readfile("a1.txt");
	
	// printf("\n\n"back_green" --- a2.txt --- "reset"\n");
	// readfile("a2.txt");
	
	// printf("\n\n"back_green" --- a3.txt --- "reset"\n");
	// readfile("a3.txt");
	
	// printf("\n\n"back_green" --- a4.txt --- "reset"\n");
	// readfile("a4.txt");
	
	printf("\n");
}