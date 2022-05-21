/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 10:27:16 by gael              #+#    #+#             */
/*   Updated: 2022/05/21 12:17:12 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	print_array(char	**arr)
{
	int	i;

	i = 0;
	while (arr[i])
	{
		printf("arr[%i]: %s", i, arr[i]);
	}
}

int	count_sep(const char *str, char sep)
{
	int	ite;
	int	count;

	ite = 0;
	while (str[ite])
	{
		if (str[ite] == sep || str[ite] == '\0')
		{
			printf("str: %i\n", ite);
			count++;
		}
		ite++;
	}
	return (count);
}

char **ft_split(const char *str, char sep)
{
	char	**result;
	// char	*item;
	int		len_word;
	int		ite;
	int		j;
	int		k;
	int		nbr_sep;

	nbr_sep = count_sep(str, sep);
	ite = 0;
	len_word = 0;
	result = (char **)malloc(nbr_sep * sizeof(char *) + 1);
	// if (!result)
	// 	return (NULL);
	while (ite < nbr_sep + 1)
	{
		len_word = 0;
		while (str[j] != sep && str[j] != '\0')
		{
			printf("%c", str[j]);
			len_word++;
			j++;
		}
		while (str[j] == sep)
			j++;
		printf(" ");
		result[ite] = (char *)malloc(len_word * sizeof(char) + 1);
		ite++;
	}
	ite = 0;
	j = 0;
	k = 0;
	while (ite < nbr_sep)
	{
		result[ite][j]
	}
	return (result);
}

int	main(void)
{
	char	*str = "abc def gh ijkl mnop";
	// char	**result;

	// result =
	// printf("%i", ft_strlen(str));
	ft_split(str, ' ');
	
	return (0);
}