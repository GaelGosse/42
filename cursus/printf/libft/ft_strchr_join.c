/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr_join.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 16:19:59 by gael              #+#    #+#             */
/*   Updated: 2022/06/20 17:48:46 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr_join(char *s1, char chr)
{
	char			*str;
	int	i;

    i = 0;
	str = (char *)malloc((ft_strlen(s1) + 2) * sizeof(char));
	if (!str)
		return (NULL);
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	str[ft_strlen(s1)] = chr;
	str[ft_strlen(s1) + 1] = '\0';
	return (str);
}

// int main(){
// 	char	*str = "abcd";
// 	char	chr = 'e';

// 	printf("\033[0;46;30m%s \n", ft_strchr_join(str, chr));
// }