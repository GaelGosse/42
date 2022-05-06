/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 12:43:53 by ggosse            #+#    #+#             */
/*   Updated: 2022/03/27 11:10:09 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include "ft.h"
#define BUF_SIZE 4096

int	main(int argc, char *argv[])
{
	char    buf[BUF_SIZE + 1];	
	
	(void)argc;
	(void)argv;
	make_struct(read_file(buf));

	/*
	
	faire le dictionnaire
	dico
	else
		write(1, "Dict Error\n", 11);

	if (argc == 2)
		if (verif argv[1] nombre == 0)
			write(1, "Error\n", 6);
		ft_rush02(argv[1], numbers.dict);
	if (argc == 3)
		if (verif argv[2] nombre == 0)
			write(1, "Error\n", 6);
		ft_rush02(argv[2], argv[1]);
	else
		write(1, "Error\n", 6);
	*/
}
