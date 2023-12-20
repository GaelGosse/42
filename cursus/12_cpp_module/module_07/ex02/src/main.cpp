/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 15:28:18 by ggosse            #+#    #+#             */
/*   Updated: 2023/12/20 19:39:02 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Array.hpp"

#define MAX_VAL 5

int main(int, char**)
{
	Array<int> numbers(MAX_VAL);
	int* mirror = new int[MAX_VAL];

	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
	}
	//SCOPE
	{
		Array<int> tmp = numbers;
		Array<int> test(tmp);
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		if (mirror[i] != numbers[i])
		{
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
	}

	try
	{
		for (unsigned int i = 0; i < numbers.size(); i++)
		{
			std::cout << "numbers["<<i<<"]: " << numbers[i] << std::endl;
		}
	}
	catch(const std::exception& e) {std::cerr << e.what() << '\n';}
	std::cout << std::endl;

	try
	{
		numbers[-2] = 0;
	}
	catch(const std::exception& e) {std::cerr << e.what() << '\n';}
	std::cout << std::endl;

	try
	{
		numbers[MAX_VAL] = 0;
	}
	catch(const std::exception& e) {std::cerr << e.what() << '\n';}
	std::cout << std::endl;

	for (int i = 0; i < MAX_VAL; i++)
	{
		numbers[i] = rand();
	}
	delete [] mirror;
	return 0;
}

#include "../src/Array.tpp"