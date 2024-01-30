/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gael <gael@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 02:55:26 by gael              #+#    #+#             */
/*   Updated: 2024/01/30 15:36:05 by gael             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/RPN.hpp"

template <typename T>
std::stack<T>	reverse_stack(std::stack<T> src)
{
	std::stack<T>	tmp;

	while (src.size() != 0)
	{
		tmp.push(src.top());
		src.pop();
	}
	return (tmp);
}

double	eval(double a, double b, char ope)
{
	switch (ope)
	{
		case '+':
			return (a + b);
		case '-':
			return (a - b);
		case '/':
			return (a / b);
		case '*':
			return (a * b);
		default:
			return 0;
	}
}

// canonical form
Rpn::Rpn(void)
{
	std::cout << "Rpn Constructor called" << std::endl;
}

Rpn::Rpn(const Rpn& src)
{
	std::cout << "Copy Rpn constructor called" << std::endl;
	*this = src;
}
Rpn& Rpn::operator=(const Rpn& src)
{
	std::cout << "Overload Rpn operator called" << std::endl;
	(void)src;
	return (*this);
}
Rpn::~Rpn(void)
{
	std::cout << "Rpn Destructor called" << std::endl;
}

// other constructor

// methods
bool	Rpn::isOpe(char chr)
{
	if (chr == '/' || chr == '*' || chr == '+' || chr == '-')
		return true;
	return false;
}

void	Rpn::check_parse(std::string arg)
{
	int	nb_ope = 0;
	int	nb_digit = 0;

	for(int i = 0; i < arg.length(); i++)
	{
		if ((isOpe(arg[i]) || std::isdigit(arg[i])) && (arg[i + 1] == ' ' || arg[i + 1] == 0))
		{
			if (isOpe(arg[i]))
				nb_ope++;
			if (std::isdigit(arg[i]))
				nb_digit++;
		}
		else if (arg[i] == ' ')
			;
		else
			throw Rpn::WrongParamException();
	}
	if (nb_ope < 1)
		throw Rpn::MinException();
	if (nb_ope + 1 != nb_digit)
		throw Rpn::CalculException();
}

void	Rpn::calculate(std::string arg)
{
	double	first = 0;
	double	second = 0;
	double	res = 0;

	check_parse(arg);
	for(int i = 0; i < arg.length(); i++)
	{
		if ((isOpe(arg[i]) || std::isdigit(arg[i])) && (arg[i + 1] == ' ' || arg[i + 1] == 0))
		{
			if (isOpe(arg[i]))
			{
				second = this->_digit.top();
				this->_digit.pop();
				first = this->_digit.top();
				this->_digit.pop();
				std::cout<<first<<arg[i]<<second<<" = "<<eval(first, second, arg[i])<<std::endl;
				this->_digit.push(eval(first, second, arg[i]));
			}
			else
				this->_digit.push(arg[i] - '0');
			// std::cout << BACK_GREEN << arg[i] << RST;
		}
		else if (arg[i] == ' ')
			;
			// std::cout << " ";
		else
			throw Rpn::WrongParamException();
			// std::cout << BACK_RED << arg[i] << RST;
	}
	std::cout << std::endl;
}

// accessors
std::stack<double>	Rpn::getDigit(void)
{
	return (this->_digit);
}

// mutators
void	Rpn::setDigit(Rpn src)
{
	this->_digit = src.getDigit();
}

// operators

// exceptions