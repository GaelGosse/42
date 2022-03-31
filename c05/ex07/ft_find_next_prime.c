/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 23:55:19 by ggosse            #+#    #+#             */
/*   Updated: 2022/03/29 23:56:50 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_is_prime(int nb)
{
        int     i;

        i = 2;
        if (nb <= 1)
                return (0);
        while (i <= nb / i)
        {
                if ((nb % i) == 0)
                        return (0);
                i++;
        }
        return (1);
}

int	ft_print_next_prime(int nb)
{
	while (1)
	{
		if (ft_is_prime(nb))
			return (nb);
		nb++;
	}
}
