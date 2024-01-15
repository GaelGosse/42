/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gael <gael@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 14:40:25 by gael              #+#    #+#             */
/*   Updated: 2024/01/15 15:14:15 by gael             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <string>
#include <cstdlib>
#include <iomanip>
#include <csignal>
#include <iostream>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		// canonical form
		MutantStack<T>();
		MutantStack<T>(const MutantStack& src);
		MutantStack<T>&operator=(const MutantStack& src);
		~MutantStack<T>();

		// other constructor
		typedef typename MutantStack<T>::stack::container_type::iterator iterator;
		typedef typename MutantStack<T>::stack::container_type::reverse_iterator reverse_iterator;
		typedef typename MutantStack<T>::stack::container_type::const_iterator const_iterator;
		typedef typename stack::container_type::const_reverse_iterator const_reverse_iterator;

		// methods

		// accessors

		// operators

		// exceptions

};

#endif
