/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gael <gael@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 14:40:25 by gael              #+#    #+#             */
/*   Updated: 2024/01/16 15:38:39 by gael             ###   ########.fr       */
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
#include <list>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		// canonical form
		MutantStack<T>(void);
		MutantStack<T>(const MutantStack<T>& src);
		MutantStack<T>&operator=(const MutantStack& src);
		~MutantStack<T>(void);

		// add *_iterator in MutantStack with real stack
		typedef typename MutantStack<T>::stack::container_type::iterator iterator;
		typedef typename MutantStack<T>::stack::container_type::reverse_iterator reverse_iterator;
		typedef typename MutantStack<T>::stack::container_type::const_iterator const_iterator;
		typedef typename MutantStack<T>::stack::container_type::const_reverse_iterator const_reverse_iterator;

		// methods
		iterator				begin(void);
		iterator				end(void);

		reverse_iterator		rbegin(void);
		reverse_iterator		rend(void);

		const_iterator			cbegin(void) const;
		const_iterator			cend(void) const;

		const_reverse_iterator	crbegin(void) const;
		const_reverse_iterator	crend(void) const;


		// accessors

		// operators

		// exceptions

};

#include "../src/MutantStack.tpp"

#endif
