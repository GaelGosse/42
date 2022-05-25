/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 19:06:47 by ggosse            #+#    #+#             */
/*   Updated: 2022/05/25 19:40:32 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int	total_len;
	char	*

	total_len = ft_strlen(dst) + ft_strlen(src);


	return (total_len);
}

int main()
{
	char	*a = "abc";
	char	*b = "def";

	printf("%i\n", ft_strlcat(a, b, 7));
}