/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   safe_rules.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 11:51:08 by ggosse            #+#    #+#             */
/*   Updated: 2022/03/20 22:03:49 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	print_all(int **tab)
{
	int	i_raw;
	int	i_col;

	i_col = 0;
	while (i_col < 6)
	{
		i_raw = 0;
		while (i_raw < 6)
		{
			printf("%i ", tab[i_col][i_raw]);
			i_raw++;
		}
		printf("\n");
		i_col++;
	}
	printf("\n\n");
}

void	rule_raw_top(int **tab)
{
	int	size;
	int	i_raw;

	size = 5;
	i_raw = 1;
	while (i_raw < size)
	{
		if (tab[0][i_raw] == 1)
		{
			tab[1][i_raw] = 4;
			if (tab[5][i_raw] == 2)
			{
				tab[4][i_raw] = 3;
			}
		}
		if (tab[0][i_raw] == 4)
		{
			tab[1][i_raw] = 1;
	                tab[2][i_raw] = 2;
        	        tab[3][i_raw] = 3;
                	tab[4][i_raw] = 4;
		}
		if (tab[0][i_raw] == 2 && tab[5][i_raw] == 3)
		{
			tab[2][i_raw] = 4;
		}
		i_raw++;
	}
}

void	rule_raw_bottom(int **tab)
{
	int     size;
	int     i_raw;

	size = 5;
	i_raw = 1;
	while (i_raw < size)
	{
		if (tab[5][i_raw] == 1)
		{
                        tab[4][i_raw] = 4;
                        if (tab[5][i_raw] == 2)
                        {
                                tab[1][i_raw] = 3;
                        }
                }
                if (tab[5][i_raw] == 4)
                {
                        tab[4][i_raw] = 1;
                        tab[3][i_raw] = 2;
                        tab[2][i_raw] = 3;
                        tab[1][i_raw] = 4;
                }
		if (tab[5][i_raw] == 2 && tab[0][i_raw] == 3)
                {
                        tab[3][i_raw] = 4;
                }
                i_raw++;
        }
}

void	rule_col_left(int **tab)
{
        int     size;
        int     i_col;

        size = 5;
        i_col = 1;

	while(i_col < size)
	{
		if (tab[i_col][0] == 1)
		{
			tab[i_col][1] = 4;
			if (tab[i_col][5] == 2)
			{
				tab[i_col][4] = 3;
			}
		}
		if (tab[i_col][0] == 4)
                {
                        tab[i_col][1] = 1;
                        tab[i_col][2] = 2;
                        tab[i_col][3] = 3;
                        tab[i_col][4] = 4;
                }
		if(tab[i_col][0] == 2 && tab[i_col][5] == 3)
		{
			tab[i_col][2] = 4;
		}
		i_col++;
	}
}

void    rule_col_right(int **tab)
{
        int     size;
        int     i_col;

        size = 5;
        i_col = 1;

	while(i_col < size)
	{
		if (tab[i_col][5] == 1)
		{
			tab[i_col][4] = 4;
			if (tab[i_col][0] == 2)
			{
				tab[i_col][1] = 3;
			}
		}
		if (tab[i_col][5] == 4)
                {
			tab[i_col][4] = 1;
			tab[i_col][3] = 2;
			tab[i_col][2] = 3;
			tab[i_col][1] = 4;
		}
		if(tab[i_col][5] == 2 && tab[i_col][0] == 3)
		{
			tab[i_col][3] = 4;
		}
		i_col++;
	}
}

void	safe_rules(int **tab)
{	
	rule_raw_top(tab);
	rule_raw_bottom(tab);
	rule_col_left(tab);
	rule_col_right(tab);
}
