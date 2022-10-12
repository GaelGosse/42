/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 15:53:47 by ggosse            #+#    #+#             */
/*   Updated: 2022/10/12 18:44:36 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

// int ft_check_args(int argc, char **argv){
// {

//     (void)argc;
//     (void)argv;
// 	printf(argc,"%i\n");
// }

int ft_check_args(int argc, char **argv)
{
	// (void)argc;
	int ite_args;
	int ite_arg;

    ite_arg = 0;
	ite_args = 1;
	printf(red"nbr %i \n"reset, (argc - 1));

	while (argv[ite_args])
	{
		ite_arg = 0;
		printf(bold_green"%s"reset" ", argv[ite_args]);
		
		while(argv[ite_args][ite_arg])
		{
			if (ft_isdigit(argv[ite_args][ite_arg]) == 0)
			{
				printf("Error");
				// exit here
			}
			ite_arg++;
		}
		printf("\n\n");
		ite_args++;
	}

	return (argc);
}

int main(int argc, char **argv){
	char	*str;

	(void)argc;
	(void)str;
	
	printf("\n"back_cyan" ----- START ----- "reset"\n");
	ft_check_args(argc, argv);
}
