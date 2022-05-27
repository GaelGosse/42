/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 19:07:42 by ggosse            #+#    #+#             */
/*   Updated: 2022/05/27 21:25:24 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t len)
{
	const unsigned char		*str;
	size_t	i;

	str = (unsigned char *)s;
	i = 0;
	while (i < len)
	{
		if (str[i] == (unsigned char)c)
			return ((void *)str + i);
		i++;
	}
	return (NULL);
}



int main()
{

	char s[] = {0, 1, 2 ,3 ,4 ,5};

	printf("%p \n", memchr(s, 0, 0));
	printf("%p \n\n", ft_memchr(s, 0, 0));
	
	printf("%p \n", memchr(s, 0, 1));
	printf("%p \n\n", ft_memchr(s, 0, 1));
	
	printf("%p \n", memchr(s, 2, 3));
	printf("%p \n\n", ft_memchr(s, 2, 3));
	
	printf("%p \n", memchr(s, 6, 6));
	printf("%p \n\n", ft_memchr(s, 6, 6));
	
	printf("%p \n", memchr(s, 2 + 256, 3));
	printf("%p \n\n", ft_memchr(s, 2 + 256, 3));
}