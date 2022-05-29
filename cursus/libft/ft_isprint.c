/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gael <gael@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 21:59:29 by ggosse            #+#    #+#             */
/*   Updated: 2022/05/28 19:59:27 by gael             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int	c)
{
	if ((c >= 32) && (c <= 126))
	{
		return (1);
	}
	return (0);
}