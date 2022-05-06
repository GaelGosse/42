/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_nb_in_l.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kportela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 15:34:48 by kportela          #+#    #+#             */
/*   Updated: 2022/03/26 19:31:40 by kportela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
void    ft_putstr(char *str);

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main(int argc, char **argv)
{
	int	d;
	int *l;
	char *str;

	(void) argc;
	d = 3;
	l = &d;
	printf("%d\n", ft_copy_nb(str, argv[1], l));
	printf("%s\n%d", str, *l);
	return (0);
}