/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gael <gael@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 18:56:44 by gael              #+#    #+#             */
/*   Updated: 2023/09/06 18:40:03 by gael             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	char ch = '\0';

	if (argc > 1)
	{
		for(int i = 1; argv[i]; i++)
		{
			// std::cout << "\n";
			std::string word(argv[i]);
			for(int j = 0; word[j]; j++)
			{
				if (isalpha(word[j]))
				{
					ch = toupper(word[j]);
					std::cout << ch;
					// std::cout << "-" << toupper(word[j]) << "-" << std::endl;
				}
				else
					std::cout << word[j];
			}
			if (argv[i + 1])
				std::cout << " ";
		}
	}
	(void)argv;
	(void)argc;
}
