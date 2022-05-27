/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gael <gael@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 17:13:02 by gael              #+#    #+#             */
/*   Updated: 2022/05/27 16:23:02 by gael             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *calloc(size_t nmemb, size_t size)
{
	void	*res;
	
	if (nmemb && ((nmemb * size / nmemb) != size))
		return (NULL);
	res = ()malloc(nmemb * size);
	if (!res)
		return (NULL);
	ft_bzero(res, size * count);
	return (res);
}

int main(void)
{
	return (0);
}