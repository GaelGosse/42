/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 15:01:17 by ggosse            #+#    #+#             */
/*   Updated: 2022/07/10 18:20:00 by ggosse           ###   ########.fr       */
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
	static char	buf[BUF_SIZE + 1];
	char		*line;
	int			ret;
	int 		i;

	i = 0;
	line = NULL;
	ret = read(fd, buf, BUF_SIZE);
	buf[ret] = '\0';
	
	// printf(yellow"%s"reset, buf);

	while (ft_is_endline(buf) == 0 && ret > 0)
	{
		// printf(yellow"in while\n"reset);

		ret = read(fd, buf, BUF_SIZE);
		buf[ret] = '\0';
			printf(red"%s"reset, buf);
	
		i++;
		// if(i > 5)
		// 	break;
	}
	// if (ret > 0)  do keep line
	printf(cyan"%i\n"reset, ret);

	line = buf;

	printf("\n\n");
	return (line);
}

int main()
{
	printf(bold_green"\n----- ----- START ----- -----\n\n"reset);
	
	readfile("a1.txt");
	printf("\n");
	readfile("a2.txt");
	printf("\n");
	readfile("a3.txt");
}