/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gael <gael@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 17:39:08 by gael              #+#    #+#             */
/*   Updated: 2023/12/15 02:26:51 by gael             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Base.hpp"
#include "../includes/A.hpp"
#include "../includes/B.hpp"
#include "../includes/C.hpp"

Base*	generate(void)
{
	srand ( time(NULL) );
	int	rndm = std::rand();

	if (rndm % 3 + 1 == 1)
		return (new A());
	else if (rndm % 3 + 1 == 2)
		return (new B());
	else
		return (new C());
}

void	identify(Base* p)
{
	if (p == NULL)
		std::cout << PURPLE << "Base pointer is NULL" << RST << std::endl;
	else if (dynamic_cast<A*>(p))
		std::cout << PURPLE << "Base A identified" << RST << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << PURPLE << "Base B identified" << RST << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << PURPLE << "Base C identified" << RST << std::endl;
}

void	identify(Base& p)
{
	try
	{
		Base& a = dynamic_cast<A&>(p);
		std::cout << CYAN << "Base A identified" << RST << std::endl;
		static_cast<void>(a);
	}
	catch (std::exception &e) {}
	try
	{
		Base& b = dynamic_cast<B&>(p);
		std::cout << CYAN << "Base B identified" << RST << std::endl;
		static_cast<void>(b);
	}
	catch (std::exception &e) {}
	try
	{
		Base& c = dynamic_cast<C&>(p);
		std::cout << CYAN << "Base C identified" << RST << std::endl;
		static_cast<void>(c);
	}
	catch (std::exception &e) {}
}

int main(void)
{
	Base*	base = generate();
	identify(base);
	identify(*base);
	return (0);
}