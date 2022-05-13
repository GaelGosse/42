/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gael <gael@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 08:22:28 by gael              #+#    #+#             */
/*   Updated: 2022/05/12 16:59:00 by gael             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

int	ft_isspace(int chr)
{
	if ((8 < chr && chr < 14) || chr == 32)
	{
		return (1);
	}
	return (0);
}

char	*ft_strtrim(char *str)
{
	int	start;
	int	end;
	int	ite;
	
	ite = 0;
	end = ft_strlen(str) - 1;
	start = 0;
	while (ft_isspace(str[start]) == 1)
		start++;
	while (ft_isspace(str[end]) == 1)
		end--;
	while (start <= end)
	{
		str[ite] = str[start];
		ite++;
		start++;
	}
	while (end <= ft_strlen(str) - 1)
	{
		str[ite] = '\0';
		end++;
	}
	// printf("%i: %c\n", start, str[start]);
	// printf("%i: %c\n\n", end, str[end]);
	return (str);
}

int main()
{
	char	a[] = "  \n    abc defg   \t ";
	char	b[] = "   \n  \t   abc defg    ";
	// ft_strtrim(a);
	// ft_strtrim(b);
	printf("%s \n", ft_strtrim(a));
	printf("%s \n", ft_strtrim(b));
	return (0);
}