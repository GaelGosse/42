/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gael <gael@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 02:55:26 by gael              #+#    #+#             */
/*   Updated: 2024/01/29 15:40:33 by gael             ###   ########.fr       */
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
			std::cout << "wrong operator" << std::endl;
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

void	Rpn::calculate(std::string arg)
{
	for(int i = 0; i < arg.length(); i++)
	{
		if ((isOpe(arg[i]) || std::isdigit(arg[i])) && (arg[i + 1] == ' ' || arg[i + 1] == 0))
		{
			if (isOpe(arg[i]))
				this->_oper.push(arg[i]);
			if (std::isdigit(arg[i]))
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
	if (this->_oper.size() + 1 != this->_digit.size())
		throw Rpn::CalculException();
	if (this->_oper.size() < 1)
		throw Rpn::MinException();
	this->_digit = reverse_stack(this->_digit);
	this->_oper = reverse_stack(this->_oper);

	double	current = this->_digit.top();
	this->_digit.pop();
	while (this->_digit.size() != 0)
	{
		// std::cout << this->_digit.top() << this->_oper.top() << current << " = " << eval(current, this->_digit.top(), this->_oper.top()) << std::endl;
		// current = eval(this->_digit.top(), current, this->_oper.top());
		std::cout << current << this->_oper.top() << this->_digit.top() << " = " << eval(current, this->_digit.top(), this->_oper.top()) << std::endl;
		current = eval(current, this->_digit.top(), this->_oper.top());
		this->_oper.pop();
		this->_digit.pop();
	}
	std::cout << BACK_RED << current << RST << std::endl;
	std::cout << std::endl;
}

// accessors
std::stack<char>	Rpn::getOper(void)
{
	return (this->_oper);
}
std::stack<double>		Rpn::getDigit(void)
{
	return (this->_digit);
}

// mutators
void	Rpn::setOper(Rpn src)
{
	this->_oper = src.getOper();
}
void	Rpn::setDigit(Rpn src)
{
	this->_digit = src.getDigit();
}

// operators

// exceptions

1   7   9   3   8   5   6   4
  -   +   /   +   -   /   *