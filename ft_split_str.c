/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 16:02:19 by ggosse            #+#    #+#             */
/*   Updated: 2022/03/19 16:52:33 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_split_str(char *str)
{
	int	cpt;
	char	tab[16];

	cpt = 0;

	(void)tab;
	while(cpt < 31)
	{
		if(str[cpt] != ' ')
		{
			printf("%c\n", str[cpt]);
		}
		cpt++;
	}
	
	return	str;
}
int	main()
{
	char	*a;

	a = "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2";
	ft_split_str(a);
}
