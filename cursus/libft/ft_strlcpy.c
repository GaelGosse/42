/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 19:06:42 by ggosse            #+#    #+#             */
/*   Updated: 2022/05/27 21:24:31 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;

	i = 0;
	src_len = ft_strlen(src);
	while (i < size)
	{
		dst[i] = src[i];
		i++;
	}
	return (src_len);
}


// int main()
// {
// 	printf("%i\n", tolower('a'));
// 	printf("%i\n", ft_tolower('a'));
// }