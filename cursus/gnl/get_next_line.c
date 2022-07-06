/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 15:01:17 by ggosse            #+#    #+#             */
/*   Updated: 2022/07/06 16:46:36 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

char	*get_next_line(int fd)
{
	int			ret;
	char		*line;
	static char	buf[BUF_SIZE + 1];
	int i;

    i = 0;
	line = NULL;
	ret = read(fd, buf, BUF_SIZE);
	buf[ret] = '\0';

	printf("start\n");
	printf("ft_is_endline(buf): %i\n", ft_is_endline(buf));
	while (ft_is_endline(buf) == 0)
	{
		printf("in while\n");
		ret = read(fd, buf, BUF_SIZE);
		buf[ret] = '\0';		
		printf("\e[1;34mbuf: %s\n", buf);
		if (i > 5)
			break;
		i++;
	}

	line = buf;
	return (line);
}

int main(){
	int dico_auth;

	dico_auth = open("a.txt", O_RDONLY);
	if (dico_auth == -1)
	{
		printf("open err\n");
		return (0);
	}


	get_next_line(dico_auth);

	
	if (close(dico_auth) == -1)
	{
		printf("open err\n");
		return (0);
	}
}