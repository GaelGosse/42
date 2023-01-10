/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 15:45:58 by ggosse            #+#    #+#             */
/*   Updated: 2023/01/09 17:20:07 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../color.h"
#include "../../color.h"
#include <stdio.h>


int main(int argc, char const *argv[])
{
	int	ite_first;
	int	ite_second;
	int	already_first;
	int	already_second;

	already_second = 0;
	already_first = 0;
	ite_first = 0;
	ite_second = 0;
	while (argv[1][ite_first])
	{
		ite_second = 0;
		already_first = 0;
		already_second = 0;
		while (argv[1][ite_second] && ite_second <= ite_first)
		{
			if (argv[1][ite_first] == argv[1][ite_second])
			{
				already_second++;
			}
			ite_second++;
		}
		ite_second = 0;
		while (argv[2][ite_second])
		{
			if (argv[1][ite_first] == argv[2][ite_second])
			{
				already_first++;
			}
			ite_second++;
		}
		if (already_first >= 1 && already_second == 1)
		{
			printf("%c", argv[1][ite_first]);
		}
		
		ite_first++;
	}
	printf("\n");
	(void)argc;
	(void)argv;
	return 0;
}

/*
Multiples of 8: 8, 16, 24, 32, 40, 48, 56, 64 ,72, 80
Multiples of 10: 10, 20, 30, 40, 50, 60, 70, 80, 90, 100


8 <= 10 // 1

16 <= 10 // 0
16 <= 20 // 1

24 <= 10 // 0
24 <= 20 // 0
24 <= 30 // 1

32 <= 10 // 0
32 <= 20 // 0
32 <= 30 // 0
32 <= 40 // 1

40 <= 10 // 0
40 <= 20 // 0
40 <= 30 // 0
40 <= 40 // 1
*/
