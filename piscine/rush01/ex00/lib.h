/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaaouac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 14:48:46 by rkaaouac          #+#    #+#             */
/*   Updated: 2022/03/20 16:54:56 by rkaaouac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_H
# define LIB_H
# include <unistd.h>
# include <stdlib.h>

void	ft_putchar(char c);
void	aff_tab(int **tab);
void	put_borders(int	**tab);
int		**init_tab(char *str);
void	safe_rules(int	**tab);

#endif
