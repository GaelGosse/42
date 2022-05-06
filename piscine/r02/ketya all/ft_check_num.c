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

int	ft_check_number(char *str, int *len_number)
{
	int	i;

	i = 0;
	*len_number = 0;
	while ((8 < str[i] && str[i] < 14) || str[i] == 32)
	{
		i++;
	}
	if (str[i] == '+')
	{
		i++;
	}
	else if (str[i] == '-')
		return (-1);
	while ('0' <= str[i] && str[i] <= '9' && *len_number < 40)
	{
		i++;
		*len_number += 1;
	}
	if (0 < *len_number && *len_number < 39 && str[i] == 0)
		return (*len_number);
	return (-1);
}

int	main(int argc, char **argv)
{
	int	d;
	int *l;
	char *str;

	(void) argc;
	d = 0;
	l = &d;
	str = argv[1];
	printf("%d\n", ft_check_number(str, l));
	printf("%s\n%d", str, *l);
	return (0);
}

/*
version ameliore de check number avec en plus la longeur en entree qui ne sera que calcule
une fois car pointeur. Retourne moins 1 si erreur et longeur sinon. Stockage pointeur.
*/