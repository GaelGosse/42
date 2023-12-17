/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 17:39:08 by gael              #+#    #+#             */
/*   Updated: 2023/12/16 19:24:36 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Whatever.hpp"

class Awesome
{
	public:
		Awesome(void) : _n(0) {}
		Awesome( int n ) : _n( n ) {}
		Awesome & operator= (Awesome & a) { _n = a._n; return *this; }
		bool operator==( Awesome const & rhs ) const { return (this->_n == rhs._n); }
		bool operator!=( Awesome const & rhs ) const{ return (this->_n != rhs._n); }
		bool operator>( Awesome const & rhs ) const { return (this->_n > rhs._n); }
		bool operator<( Awesome const & rhs ) const { return (this->_n < rhs._n); }
		bool operator>=( Awesome const & rhs ) const { return (this->_n >= rhs._n); }
		bool operator<=( Awesome const & rhs ) const { return (this->_n <= rhs._n); }
		int get_n() const { return _n; }
	private:
		int _n;
};

std::ostream & operator<<(std::ostream & o, const Awesome &a) { o << a.get_n(); return o; }

int main(void)
{
	int	x = 1;
	int	y = 3;

	std::cout << "x = " << x << "			y = " << y << std::endl;
	swap(x, y);
	std::cout << "x = " << x << "			y = " << y << std::endl;
	std::cout << "max(x, y): " << max(x, y) << std::endl;
	std::cout << "min(x, y): " << min(x, y) << std::endl;
	std::cout << "x = " << x << "			y = " << y << std::endl;

	Awesome a(2), b(4);

	std::cout << "-----------------------------------------" << std::endl;
	std::cout << "a = " << a << "			b = " << b << std::endl;
	swap(a, b);
	std::cout << "a = " << a << "			b = " << b << std::endl;
	std::cout << "max(a, b): " << max(a, b) << std::endl;
	std::cout << "min(a, b): " << min(a, b) << std::endl;
	std::cout << "a = " << a << "			b = " << b << std::endl;
	return (0);
}
