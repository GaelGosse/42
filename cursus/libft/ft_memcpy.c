/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 19:07:51 by ggosse            #+#    #+#             */
/*   Updated: 2022/05/24 18:54:26 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void	*ft_memcpy(void *destination, const void *source, size_t size)
{
	unsigned int	i;
	const char		*new_src;
	char			*new_dest;

	new_dest = destination;
	new_src = source;
	i = 0;
	new_dest = (char *)malloc(size);
	while (new_src[i])
	{
		new_dest[i] = new_src[i]; 
		i++;
	}
	return 	(new_dest);
}

int main() {

    char array[] = "abc";
    char *copy = NULL;
    int length = sizeof(char) * 3;
       
    copy = (char *) malloc( length );
    ft_memcpy(copy, array, length );
        
    printf("%s", copy);
    printf("\n" );
        
    free( copy );
    
    return (0);
}