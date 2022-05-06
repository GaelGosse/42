/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check+atoi.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthimoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 16:07:21 by jthimoni          #+#    #+#             */
/*   Updated: 2022/03/26 19:06:40 by jthimoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_atoi(char *str);

int	ft_check_number(char *str)
{
	int	i;
	int	len_number;

	i = 0;
	len_number = 0;
	while ((8 < str[i] && str[i] < 14) || str[i] == 32)
		i++;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		write(1, "Error\n", 6);
		return (0);
	}
	while ('0' <= str[i] && str[i] <= '9' && len_number < 40)
	{
		i++;
		len_number++;
	}
	if (0 < len_number && len_number < 39 && str[i] == 0)
		return (1);
	write(1, "Error\n", 6);
	return (0);
}

int	ft_atoi(char *str)
{
	long long int	nb;
	int				i;
	int				sign;

	nb = 0;
	i = 0;
	sign = 1;
	if (ft_check_number(str) == 0)
		return (-1);
	while ((8 < str[i] && str[i] < 14) || str[i] == 32)
		i++;
	if (str[i] == '-')
	{
		sign = -sign;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while ('0' <= str[i] && str[i] <= '9')
	{
		nb = nb * 10 + str[i] - '0';
		i++;
	}
	return (nb * sign);
}

int	main(int argc, char **argv)
{
	int	d;
	(void) argc;
	d = ft_atoi(argv[1]);
	printf("%d", d);
	return (0);
}

//Si la chaine est composee de whitespaces, puis d'un
// unique signe (ou aucun), puis de chiffres composant
// un nombre inferieur a 10^39, elle retourne ce nombre.
// Sinon, elle retourne 0.
