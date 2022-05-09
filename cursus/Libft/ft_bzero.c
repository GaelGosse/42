/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 21:26:10 by ggosse            #+#    #+#             */
/*   Updated: 2022/05/09 19:07:26 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int	c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
			c += 32;
	}
	return (c);
}

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main()
{
	printf("%i\n", tolower('a'));
	printf("%i\n", ft_tolower('a'));
}