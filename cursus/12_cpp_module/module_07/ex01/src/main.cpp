/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 17:39:08 by gael              #+#    #+#             */
/*   Updated: 2023/12/17 15:54:06 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Iter.hpp"

int main()
{
	int i[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	char c[5] = {'a', 'b', 'c', 'd', 'e'};
	std::string str[4] = {"mathieu", "cyril", "bob", "patrick"};

	iter(i, 10, print<int>);
	std::cout << std::endl;
	iter(c, 5, print<char>);
	std::cout << std::endl;
	iter(str, 4, print<std::string>);

	// return (0);

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << " ----------------------------------------- " << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

// }
// int main() {
	int tab[] = { 0, 1, 2, 3, 4 }; // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense?
	Awesome tab2[5];
	iter( tab, 5, print );
	iter( tab2, 5, print );
	return 0;
}

// class Awesome
// {
// 	public:
// 		Awesome( void ) : _n( 42 ) { return; }
// 		int get( void ) const { return this->_n; }
// 	private:
// 		int _n;
// };
// std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

// template< typename T >
// void print( T const & x ) { std::cout << x << std::endl; return; }
