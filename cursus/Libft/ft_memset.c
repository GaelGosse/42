/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 17:02:09 by ggosse            #+#    #+#             */
/*   Updated: 2022/05/05 12:39:03 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memset(void	*str, int value, size_t count)
{
	

	return (str);
}


int main()
{
    char str[50] = "Articleworld is a programming Blog.";
    
	printf("\nBefore memset(): %s\n\n", str);
    memset(str + 11, '*', 6);
    printf("After memset(): %s\n\n", str);

    return (0);
}