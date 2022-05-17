/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 19:07:47 by ggosse            #+#    #+#             */
/*   Updated: 2022/05/17 16:08:14 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_memcmp(int	c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
			c += 32;
	}
	return (c);
}

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

// int main()
// {
// 	printf("%i\n", memcmp('a'));
// 	printf("%i\n", ft_memcmp('a'));
// }