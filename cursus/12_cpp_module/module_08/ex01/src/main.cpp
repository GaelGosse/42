/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 21:03:39 by gael              #+#    #+#             */
/*   Updated: 2024/01/09 21:38:05 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Span.hpp"

int	main(int argc, char **argv)
{
	Span	sp(5);

	sp.addNumber(8);
	sp.addNumber(3);
	sp.addNumber(7);
	(void)argc;
	(void)argv;
}
