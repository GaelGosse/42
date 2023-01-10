/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 11:21:22 by ggosse            #+#    #+#             */
/*   Updated: 2023/01/09 11:45:05 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../color.h"
#include <stdio.h>
#include <string.h>
#include <stddef.h>

char	*ft_strpbrk(const char *s, const char *accept)
{
	int	ite_s;
	int	ite_accept;

	ite_accept = 0;
	ite_s = 0;
	while (s[ite_s] != '\0')
	{
		ite_accept = 0;
		while (accept[ite_accept] != '\0')
		{
			if (accept[ite_accept] == s[ite_s])
				return ((char *)s + ite_s);
			ite_accept++;
		}
		ite_s++;
	}
	return (NULL);
}

int main(int argc, char **argv){

	printf(BACK_GREEN"mine: %s"RESET"\n", ft_strpbrk("salut", "luthece"));
	printf(BACK_CYAN"reel %s"RESET"\n", strpbrk("salut", "luthece"));
	(void)argc;
	(void)argv;
}