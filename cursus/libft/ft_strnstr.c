/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 19:05:30 by ggosse            #+#    #+#             */
/*   Updated: 2022/05/17 16:09:41 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stddef.h>

// char	*ft_strnstr(const char *big, const char *little, size_t len)
// {
// 	int	i;
// 	int	j;

// 	j = 0;
// 	i = 0;
// 	while (big[i] != '\0')
// 	{
// 		if (big[i] == little[j])
// 		{
// 			j = 0;
// 			while (big[i] == little[j])
// 			{
// 				i++;
// 				j++;
// 			}
// 			i = 0;
// 		}

// 		i++;
// 	}
// }

// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>
// #include <stdlib.h>

// int main()
// {
// 	printf("%s \n", ft_strnstr('a'));
// }