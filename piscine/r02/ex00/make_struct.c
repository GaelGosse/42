/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_struct.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 15:15:59 by ggosse            #+#    #+#             */
/*   Updated: 2022/03/27 14:35:37 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>

char	*read_file(char *buf)
{
	int	dico_auth;
	int	ret;
	//char	buf[BUF_SIZE + 1];

	dico_auth = open("numbers.dict", O_RDONLY);
	if (dico_auth == -1)
	{
		return ("open() error");
	}
	ret = read(dico_auth, buf, BUF_SIZE);
	buf[ret] = '\0';
	//ft_putstr(buf);
	if (close(dico_auth) == -1)
	{
		return ("close() error");
	}
	return (buf);
}

int	break_len(char *c)
{
	int	i;
	int	brk;

	i = 0;
	brk = 0;
	while (c[i] != '\0')
	{
		if (c[i] == '\n')
			brk++;
		i++;
	}
	ft_putnbr(brk);	
	return (brk);
}

char    *make_struct(char *str)
{
        int     **dico;
        int     i;
        int     j;
	int	size;

	size = break_len(str);
        i = 0;
        dico = malloc(size * sizeof(int *));
        while (i < size)
        {
                dico[i] = malloc(size * sizeof(int));
                i++;
        }
        i = 0;
        j = 0;
        while (i < size)
        {
                while (j < size)
                {
                        dico[i][j] = 0;
                        j++;
                }
                i++;
        }
        return (tab);
} 
/*
char	*make_struct(char *str)
{
	char c[size];
	int	i;

	i = 0;
	while (i < break_len(str))
	{
		while ()
			
		c[i] = "abc";
	}
	return (str);
}
*/
