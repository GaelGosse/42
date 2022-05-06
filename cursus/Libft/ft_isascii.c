/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 21:58:10 by ggosse            #+#    #+#             */
/*   Updated: 2022/05/03 21:58:44 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int	c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	return (0);
}