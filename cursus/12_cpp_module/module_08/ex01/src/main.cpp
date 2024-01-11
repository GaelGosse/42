/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 21:03:39 by gael              #+#    #+#             */
/*   Updated: 2024/01/11 17:07:47 by ggosse           ###   ########.fr       */
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
	Span	sp(5);

	sp.addNumber(8);
	sp.addNumber(3);
	sp.addNumber(7);

	// printVector(sp.getVector());

	std::cout << "shortestSpan: " << sp.shortestSpan() << std::endl;
	// std::cout << "longestSpan:  " << sp.longestSpan() << std::endl;

}
