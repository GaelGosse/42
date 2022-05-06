/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_tab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrolland <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 13:11:55 by qrolland          #+#    #+#             */
/*   Updated: 2022/03/20 15:59:45 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	put_borders(int **tab, char *str)
{
	int	i_str;
	int	i_tab;

	i_str = 0;
	i_tab = 1;
	while (i_str < 31)
	{
		if (i_str < 7)
			tab[0][i_tab] = str[i_str] - '0';
		else if (i_str < 15)
			tab[5][i_tab] = str[i_str] - '0';
		else if (i_str < 23)
			tab[i_tab][0] = str[i_str] - '0';
		else if (i_str < 31)
			tab[i_tab][5] = str[i_str] - '0';
		i_str = i_str + 2;
		i_tab++;
		if (i_tab == 5)
			i_tab = 1;
	}
}

int	**init_tab(char *str)
{
	int	**tab;
	int	i;
	int	j;

	i = 0;
	tab = malloc(6 * sizeof(int *));
	while (i < 6)
	{
		tab[i] = malloc(6 * sizeof(int));
		i++;
	}
	i = 0;
	j = 0;
	while (i < 6)
	{
		while (j < 6)
		{
			tab[i][j] = 0;
			j++;
		}
		i++;
	}
	put_borders (tab, str);
	return (tab);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
