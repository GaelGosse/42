/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 19:06:54 by ggosse            #+#    #+#             */
/*   Updated: 2022/05/30 17:15:03 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int search)
{
	size_t	i;

	i = 0;
	while (i <= ft_strlen((const char *)(str)))
	{
		if (str[i] == (unsigned char)(search))
		{
			return ((char *)(&str[i]));
		}
		i++;
	}
	return (NULL);
}

// int main()
// {
// 	printf("%i\n", tolower('a'));
// 	printf("%i\n", ft_tolower('a'));
// }