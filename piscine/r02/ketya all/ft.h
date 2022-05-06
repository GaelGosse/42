/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kportela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 14:10:59 by kportela          #+#    #+#             */
/*   Updated: 2022/03/26 19:33:41 by kportela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Ici on inlue tous les prototypes de nos fonctions (appels) et les bibliotheques. Appel avec #include "ft.h" dans tous nos fichiers !*/

#ifdef FT_H
# define FT_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

void    ft_putchar(char c);
void    ft_putstr(char *str);
int     str_len(char *str);

#endif