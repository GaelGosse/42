/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 19:07:51 by ggosse            #+#    #+#             */
/*   Updated: 2022/05/17 16:08:25 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_memcpy(int	c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
			c += 32;
	}
	return (c);
}

// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>
// #include <stdlib.h>

// int main()
// {
// 	printf("%i\n", memcpy('a'));
// 	printf("%i\n", ft_memcpy('a'));
// }