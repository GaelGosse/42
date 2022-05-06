/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kportela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 14:10:59 by kportela          #+#    #+#             */
/*   Updated: 2022/03/26 20:59:53 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Ici on inlue tous les prototypes de nos fonctions (appels) 
 * et les bibliotheques.
 * Appel avec #include "ft.h" dans tous nos fichiers !*/

#include <unistd.h>
#include <stdlib.h>
#define BUF_SIZE 4096

void	ft_putnbr(int nb);
void	ft_putstr(char *c);
void	ft_putchar(char c);
char	*read_file(char *buf);
char	*make_struct(char *str, int size);
int     break_len(char *c);
