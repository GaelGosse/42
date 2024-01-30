/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gael <gael@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 15:58:11 by gael              #+#    #+#             */
/*   Updated: 2024/01/30 17:58:35 by gael             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/PmergeMe.hpp"
PmergeMe::PmergeMe()
{
}

void	PmergeMe::startProgram(int argc, char **argv)
{
	long	n = 0;

	if (argc == 2)
	{
		std::string	str(argv[1]);
		std::string	delimiter = " ";

		size_t	pos = 0;
		std::string	token;
		while ((pos = str.find(delimiter)) != std::string::npos)
		{
			token = str.substr(0, pos);
			n = atol(token.c_str());
			if (n < 0 || n > INT_MAX)
				throw PmergeMe::IntException();
			this->_vect.push_back(n);
			this->_deque.push_back(n);
			str.erase(0, pos + delimiter.length());
		}
		n = atol(str.c_str());
		if (n < 0 || n > INT_MAX)
			throw PmergeMe::IntException();
		this->_vect.push_back(n);
		this->_deque.push_back(n);
	}
	else
	{
		for (int i = 1; i < argc; i++)
		{
			if (!numbersOnly(argv[i]))
				throw PmergeMe::NanException();
			n = atol(argv[i]);
			if (n < 0 || n > INT_MAX)
				throw PmergeMe::IntException();
			this->_vect.push_back(n);
			this->_deque.push_back(n);
		}
	}
	std::cout << "Before: ";
	printSequence();

	double	elapsed_time = 0;
	timeval	start, end;
	gettimeofday(&start, NULL);
	merge_insert_sort_vector(0, this->_vect.size() - 1);
	gettimeofday(&end, NULL);
	elapsed_time = (end.tv_sec - start.tv_sec) * 1000000.0;
	elapsed_time += (end.tv_usec - start.tv_usec);

	double	microseconds1 = elapsed_time;
	gettimeofday(&start, NULL);
	merge_insert_sort_deque(0, this->_deque.size() - 1);
	gettimeofday(&end, NULL);
	elapsed_time = (end.tv_sec - start.tv_sec) * 1000000.0;
	elapsed_time += (end.tv_usec - start.tv_usec);

	double	microseconds2 = elapsed_time;
	std::cout << "After: ";
	printSequence();

	std::cout << "Time to process a range of " << this->_vect.size() << " elements with std::vector : " << microseconds1 << " us" << std::endl;
	std::cout << "Time to process a range of " << this->_deque.size() << " elements with std::deque : " << microseconds2 << " us" << std::endl;
}

PmergeMe::~PmergeMe()
{
}

PmergeMe::PmergeMe(const PmergeMe& res)
{
	*this = res;
}

PmergeMe& PmergeMe::operator=(const PmergeMe& res)
{
	this->_vect = res.getVect();
	this->_deque = res.getDeque();
	return *this;
}

bool	PmergeMe::numbersOnly(std::string str)
{
	for (size_t i = 0; i < str.size(); i++)
	{
		if (i == 0 && str[i] == '+')
			continue;
		if (!isdigit(str[i]))
			return false;
	}
	return true;
}

std::vector<long>	PmergeMe::getVect() const
{
	return this->_vect;
}

std::deque<long>	PmergeMe::getDeque() const
{
	return this->_deque;
}

void	PmergeMe::printSequence()
{
	for (size_t i = 0; i < this->_vect.size(); i++)
	{
		std::cout << this->_vect.at(i) << " ";
	}
	std::cout << std::endl;
}

void	PmergeMe::insertion_sort_vector(int left, int right)
{
	int	key = 0;
	int	j = 0;

	for (int i = left + 1; i <= right; i++)
	{
		// int w = 0;
		// while (this->_vect[w])
		// {
		// 	std::cout << this->_vect[w] << " ";
		// 	w++;
		// }
		// std::cout << std::endl;
		j = i - 1;
		key = this->_vect[i];
		while (j >= left && this->_vect[j] > key)
		{
			std::swap(this->_vect[j + 1], this->_vect[j]);
			j--;
		}
	}
	// int w = 0;
	// while (this->_vect[w])
	// {
	// 	std::cout << this->_vect[w] << " ";
	// 	w++;
	// }
	// std::cout << std::endl;
}

void	PmergeMe::merge_sort_vector(int left, int middle, int right)
{
	int	i = 0;
	int	j = 0;
	int	k = left;
	int	n1 = middle - left + 1;
	int	n2 = right - middle;
	std::vector<long> right_vect(n2);
	std::vector<long> left_vect(n1);

	for (i = 0; i < n1; i++)
		left_vect[i] = this->_vect[left + i];
	for (j = 0; j < n2; j++)
		right_vect[j] = this->_vect[middle + 1 + j];
	while (i < n1 && j < n2)
	{
		if (left_vect[i] <= right_vect[j])
		{
			this->_vect[k] = left_vect[i];
			i++;
		}
		else
		{
			this->_vect[k] = right_vect[j];
			j++;
		}
		k++;
	}
	while (i < n1)
	{
		this->_vect[k] = left_vect[i];
		i++;
		k++;
	}
	while (j < n2)
	{
		this->_vect[k] = right_vect[j];
		j++;
		k++;
	}

	// int w = 0;
	// while (this->_vect[w])
	// {
	// 	std::cout << RED << this->_vect[w] << " " << RST;
	// 	w++;
	// }
	// std::cout << std::endl;
}

void	PmergeMe::merge_insert_sort_vector(int left, int right)
{
	if (right - left < 10)
		insertion_sort_vector(left, right);
	else
	{
		int middle = left + (right - left) / 2;

		// int w = left;
		// while (w <= middle)
		// {
		// 	std::cout << YELLOW << this->_vect[w] << " ";
		// 	w++;
		// }
		// std::cout << "  " << std::endl;

		// w = middle + 1;
		// while (w <= right)
		// {
		// 	std::cout << this->_vect[w] << " ";
		// 	w++;
		// }
		// std::cout << "  " << RST << std::endl;
		// std::cout << std::endl;

		merge_insert_sort_vector(left, middle);
		merge_insert_sort_vector(middle + 1, right);
		merge_sort_vector(left, middle, right);
	}
}

void	PmergeMe::insertion_sort_deque(int left, int right)
{
	int	key;

	key = 0;
	for (int i = left + 1; i <= right; i++)
	{
		int	j = i - 1;
		key = this->_deque[i];
		while (j >= left && this->_deque[j] > key)
		{
			std::swap(this->_deque[j + 1], this->_deque[j]);
			j--;
		}
	}
}

void	PmergeMe::merge_sort_deque(int left, int middle, int right)
{
	int	i, j, k;
	int	n1 = middle - left + 1;
	int	n2 = right - middle;
	std::deque<long> right_deque(n2);
	std::deque<long> left_deque(n1);

	for (i = 0; i < n1; i++)
		left_deque[i] = this->_deque[left + i];
	for (j = 0; j < n2; j++)
		right_deque[j] = this->_deque[middle + 1 + j];
	i = 0;
	j = 0;
	k = left;
	while (i < n1 && j < n2)
	{
		if (left_deque[i] <= right_deque[j])
		{
			this->_deque[k] = left_deque[i];
			i++;
		}
		else
		{
			this->_deque[k] = right_deque[j];
			j++;
		}
		k++;
	}
	while (i < n1)
	{
		this->_deque[k] = left_deque[i];
		i++;
		k++;
	}
	while (j < n2)
	{
		this->_deque[k] = right_deque[j];
		j++;
		k++;
	}
}

void	PmergeMe::merge_insert_sort_deque(int left, int right)
{
	if (right - left < 10)
		insertion_sort_deque(left, right);
	else
	{
		int middle = left + (right - left) / 2;
		merge_insert_sort_deque(left, middle);
		merge_insert_sort_deque(middle + 1, right);
		merge_sort_deque(left, middle, right);
	}
}
