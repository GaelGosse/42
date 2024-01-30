/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gael <gael@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 16:06:31 by gael              #+#    #+#             */
/*   Updated: 2024/01/30 17:04:05 by gael             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/PmergeMe.hpp"

int main(int argc, char **argv)
{
	if (argc < 2)
	{
		std::cout << "Err: Must have at least two arg" << std::endl;
		return (EXIT_FAILURE);
	}
	try
	{
		PmergeMe merge_insert;

		merge_insert.startProgram(argc, argv);
	} catch(const std::exception& e) { std::cout << "Err: " << e.what() << std::endl; }
	return (0);
}