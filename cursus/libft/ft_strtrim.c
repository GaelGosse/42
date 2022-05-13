/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 08:22:28 by gael              #+#    #+#             */
/*   Updated: 2022/05/13 21:28:36 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

int	ft_isset(const char c, const char	*set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(const char	*str, const char	*set)
{
	int		start;
	int		end;
	int		ite;
	char	*new_str;

	ite = 0;
	start = 0;
	end = ft_strlen((char *)(str)) - 1;
	while (ft_isset(str[start], set) == 1)
		start++;
	while (ft_isset(str[end], set) == 1)
		end--;
	new_str = (char *)malloc((end - start) * sizeof(char) + 1);
	while (start <= end)
	{
		new_str[ite] = str[start];
		ite++;
		start++;
	}
	return (new_str);
}

int	main(void)
{
	char	a[] = "xyxyxyxabc defgyxzyxyyx";
	char	b[] = "yyyyyabc defgxxxxxx";

	printf("%s \n", ft_strtrim(a, "xyz"));
	printf("%s \n", ft_strtrim(b, "xyz"));
	return (0);
}
