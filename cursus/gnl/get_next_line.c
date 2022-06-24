/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 15:01:17 by ggosse            #+#    #+#             */
/*   Updated: 2022/06/23 15:08:50 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	int ret;
	int buf;

    buf = 0;
    ret = read(fd, buf, BUF_SIZE);
}

int main(){
	int dico_auth;

    dico_auth = open("numbers.dict", O_RDONLY);
	if (dico_auth == -1)
	{
		return (0);
	}
	get_next_line(dico_auth);
	if (close(dico_auth) == -1)
	{
		return (0);
	}
}