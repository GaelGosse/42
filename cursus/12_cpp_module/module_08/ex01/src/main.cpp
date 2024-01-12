/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 21:03:39 by gael              #+#    #+#             */
/*   Updated: 2024/01/12 17:12:58 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Span.hpp"

void	printVector(std::vector<int> vct)
{
	for (unsigned int i = 0; i < vct.capacity(); i++)
		std::cout << "_v[" << i << "]: " << vct[i] << std::endl;
}

int	main()
{
	try
	{
		std::cout << " ---------- NORMAL ---------- " << std::endl;
		Span	sp(5);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		// printVector(sp.getVector());

		std::cout << "shortestSpan: " << sp.shortestSpan() << std::endl;
		std::cout << "longestSpan:  " << sp.longestSpan() << std::endl;

	}
	catch (std::exception &e) { std::cout << e.what() << std::endl; }
	try
	{
		std::cout << " ---------- FULL ---------- " << std::endl;
		Span	sp(5);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		sp.addNumber(8);

		std::cout << "shortestSpan: " << sp.shortestSpan() << std::endl;
		std::cout << "longestSpan:  " << sp.longestSpan() << std::endl;

	}
	catch (std::exception &e) { std::cout << e.what() << std::endl; }
	try
	{
		std::cout << " ---------- EMPTY ---------- " << std::endl;
		Span	sp(5);

		std::cout << "shortestSpan: " << sp.shortestSpan() << std::endl;
		std::cout << "longestSpan:  " << sp.longestSpan() << std::endl;

	}
	catch (std::exception &e) { std::cout << e.what() << std::endl; }
	try
	{
		std::cout << " ---------- ADD RANGE ---------- " << std::endl;
		Span				sp(5);
		std::vector<int>	tmp;

		for (int i = 88; i < 99; i++)
			tmp.push_back(i);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addRange(tmp.begin(), tmp.end());
		printVector(sp.getVector());
	}
	catch (std::exception &e) { std::cout << e.what() << std::endl; }
	try
	{
		std::cout << " ---------- ADD RANGE EMPTY ---------- " << std::endl;
		Span				sp(5);
		std::vector<int>	tmp;

		// for (int i = 88; i < 99; i++)
		// 	tmp.push_back(i);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addRange(tmp.begin(), tmp.end());
		printVector(sp.getVector());
	}
	catch (std::exception &e) { std::cout << e.what() << std::endl; }

}
