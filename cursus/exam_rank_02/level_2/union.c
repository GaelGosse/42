/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 12:37:24 by ggosse            #+#    #+#             */
/*   Updated: 2023/01/09 16:23:38 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../color.h"

#include <stdio.h>
#include <unistd.h>

int main(int argc, char **argv){
	int	ite_first;
	int	ite_second;
	int	already;

	already = 0;
	ite_first = 0;
	while (argv[1][ite_first])
	{
		ite_second = 0;
		already = 0;
		// printf(BACK_PURPLE"argv[1][ite_first]: %c"RESET"\n", argv[1][ite_first]);
		while (argv[1][ite_second] && ite_second <= ite_first)
		{
			// printf(BACK_YELLOW"argv[1][ite_second]: %c"RESET"\n", argv[1][ite_second]);
			if (argv[1][ite_first] == argv[1][ite_second])
				already++;
			ite_second++;
		}
		if (already == 1)
			printf("%c", argv[1][ite_first]);
		ite_first++;
		// printf("\n");
	}
	already = 0;
	ite_first = 0;
	while (argv[2][ite_first])
	{
		ite_second = 0;
		already = 0;
		while (argv[1][ite_second])
		{
			// printf(BACK_YELLOW"argv[1][ite_second]: %c"RESET"\n", argv[1][ite_second]);
			if (argv[2][ite_first] == argv[1][ite_second])
				already++;
			ite_second++;
		}
		ite_second = 0;
		while (argv[2][ite_second] && ite_second <= ite_first)
		{
			if (argv[2][ite_first] == argv[2][ite_second])
				already++;
			ite_second++;
		}
		if (already == 1)
			printf("%c", argv[2][ite_first]);
		ite_first++;
	}
	// printf("\n");
	(void)argc;
	(void)argv;
}

int main(int argc, char const *argv[])
{
	char	str[] = "vffgd";

	return 0;
}






























// int main(int argc, char **argv){

// 	int	ite_big;
// 	int	ite_lil;
// 	int	nbr_dup;

// 	nbr_dup = 0;
// 	ite_lil = 0;
// 	ite_big = 0;
// 	while (argv[1][ite_big])
// 	{
// 		ite_lil = 0;
// 		while (argv[1][ite_lil] && ite_lil <= ite_big)
// 		{
// 			if (argv[1][ite_big] == argv[1][ite_lil] && nbr_dup == 0)
// 				nbr_dup++;
// 			printf(BACK_YELLOW"argv[1][ite_lil]: %c"RESET"\n", argv[1][ite_lil]);
// 			ite_lil++;
// 		}
// 		printf("\n");
// 		// if (nbr_dup == 1)
// 		// {
// 		// 	 printf(BACK_PURPLE"nbr_dup: %i"RESET"\n", nbr_dup);
// 		// 	write(1, &argv[1][ite_big], 1);
// 		// 	printf("\n");
// 		// }
// 		// nbr_dup++;
// 		ite_big++;
// 	}
	
// 	(void)argc;
// 	(void)argv;
// }

// axbbbcx