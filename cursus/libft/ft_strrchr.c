/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gael <gael@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 19:05:21 by ggosse            #+#    #+#             */
/*   Updated: 2022/05/29 20:49:05 by gael             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int search)
{
	int	i;

	i = (int)ft_strlen((const char	*)(str));
	while(i >= 0)
	{
		// printf("%c \n", (unsigned char)(search));
		// printf("%c \n\n", str[i]);
		if(str[i] == (unsigned char)(search))
		{
			return ((char *)(&str[i]));
		}
		i--;
	}
	return (NULL);
}

// int main()
// {
// 	char s[] = "tripouille";
// 	// char s2[] = "ltripouiel";

// 	ft_strrchr(s, 't');
// 	// printf("%s \n", ft_strrchr(s, 't'));
// 	// printf("%s \n", strrchr(s, 't'));

// 	return (0);
// }
