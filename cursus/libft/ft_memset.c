/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gael <gael@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 17:02:09 by ggosse            #+#    #+#             */
/*   Updated: 2022/05/15 23:07:37 by gael             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 

void	*ft_memset(void	*str, int value, size_t len)
{
	unsigned char	*p;
	int	i;
	
	p = str;
	i = 0;
	while (len--)
	{
		*(p + i) = (unsigned char)value;
		i++;
	}
	return p;
}
/*
int	main (){
	char	str[50] = "abc defg hijkl mnop"; // 19
    printf("Before memset(): %s\n", str);
    ft_memset(str + 4, '*', 4);
    printf("After memset():  %s\n\n", str);
}
*/