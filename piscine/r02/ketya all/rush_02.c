/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthimoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 11:35:47 by jthimoni          #+#    #+#             */
/*   Updated: 2022/03/26 14:01:46 by jthimoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>

int	test()
{
	int	dico = open("numbers.dict", O_RDONLY);
	if (dico < 0)
	{
		return (1);
	}
	else
	{
		printf("%i", dico);
	}
	return (0);
}

int	main()
{
	int len_number;
	test();
	/*
	faire le dictionnaire
	dico 
	else
		write(1, "Dict Error\n", 11);
	   
	if (argc == 2)
		if (verif argv[1] nombre == -1)
			write(1, "Error\n", 6);
		ft_rush02(argv[1], numbers.dict);
	if (argc == 3)
		if (verif argv[2] nombre == -1)
			write(1, "Error\n", 6);
		ft_rush02(argv[2], argv[1]);
	else
		write(1, "Error\n", 6);

*/
}
