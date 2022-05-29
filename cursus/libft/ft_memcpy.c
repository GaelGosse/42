/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gael <gael@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 19:07:51 by ggosse            #+#    #+#             */
/*   Updated: 2022/05/28 16:05:01 by gael             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void	*ft_memcpy(void *destination, const void *source, size_t size)
{
	size_t	i;
	unsigned char	*new_src;
	unsigned char	*new_dest;

	new_dest = (unsigned char *)destination;
	new_src = (unsigned char *)source;
	i = 0;
	while (i < size)
	{
		new_dest[i] = new_src[i]; 
		i++;
	}
	return 	(new_dest);
}

// int main() {

//     char array[] = "abc";
//     char *copy = NULL;
//     int length = sizeof(char) * 3;
       
//     copy = (char *) malloc( length );
//     ft_memcpy(copy, array, length );
        
//     printf("%s", copy);
//     printf("\n" );
        
//     free( copy );
    
//     return (0);
// }