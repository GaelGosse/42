/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 10:44:26 by ggosse            #+#    #+#             */
/*   Updated: 2022/03/14 11:17:15 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n){
	char 	positive;
	char	negative;

	positive = 'P';
	negative = 'N';
	if(n < 0){
		write(1, &negative, 1);
	}
	else{
		write(1, &positive, 1);
	}
}
void	 ft_is_negative(int n);
