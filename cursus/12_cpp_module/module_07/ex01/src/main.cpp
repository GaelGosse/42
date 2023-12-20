/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 17:39:08 by gael              #+#    #+#             */
/*   Updated: 2023/12/18 15:30:00 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Iter.hpp"

int main()
{
	int i[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	char c[5] = {'a', 'b', 'c', 'd', 'e'};
	std::string str[4] = {"Gael", "John", "James", "abcdef"};

	iter(i, 10, print<int>);
	std::cout << std::endl;
	iter(c, 5, print<char>);
	std::cout << std::endl;
	iter(str, 4, print<std::string>);
}
