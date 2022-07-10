/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gael <gael@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 14:47:32 by gael              #+#    #+#             */
/*   Updated: 2022/07/09 15:25:47 by gael             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COLOR_H
# define COLOR_H

#include <stdio.h>

// color
#define black "\033[0;30m"
#define red "\033[0;31m"
#define green "\033[0;32m"
#define yellow "\033[0;33m"
#define orange "\033[0;34m"
#define purple "\033[0;35m"
#define cyan "\033[0;36m"
#define white "\033[0;37m"

// bold color
#define bold_black "\033[1;30m"
#define bold_red "\033[1;31m"
#define bold_green "\033[1;32m"
#define bold_yellow "\033[1;33m"
#define bold_orange "\033[1;34m"
#define bold_purple "\033[1;35m"
#define bold_cyan "\033[1;36m"
#define bold_white "\033[1;37m"

// background
#define back_black "\033[0;40m"
#define back_red "\033[0;41m"
#define back_green "\033[0;42m"
#define back_orange "\033[0;43m"
#define back_blue "\033[0;44m"
#define back_purple "\033[0;45m"
#define back_cyan "\033[0;46m"
#define back_white "\033[0;47m"

#define reset "\033[0m"


#endif