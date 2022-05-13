/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gael <gael@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 17:02:09 by ggosse            #+#    #+#             */
/*   Updated: 2022/05/12 16:09:06 by gael             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 

void	*ft_memset(void	*str, int value, size_t count)
{
	// char	*chr;

	// chr = str;

	(void)value;
	(void)count;
	return (str);
}

int	main (){
	char	str[50] = "abc defg hijkl mnop"; // 19

	printf("%s", ft_memset(str + 5, 6, '*'));
}