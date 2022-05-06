/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dico.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kportela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 15:34:48 by kportela          #+#    #+#             */
/*   Updated: 2022/03/26 19:31:40 by kportela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>


char *ft_buffer(char *file, char *buffer, int i)
{
    int fd;

    fd = open(file, O_RDONLY);
    read(fd, buffer, i);
    buffer[i] = '\0';
    close(fd);
    return (buffer);
}

char *convert_file(char *file)
{
    int fd;
    char buf;
    int i;
    char *buffer;

    i = 0;
    fd = open(file, O_RDONLY);
    if (fd == -1)
        return (NULL);
    while (read(fd, &buf, 1) > 0)
        i++;
    buffer = (char *)malloc(sizeof(char) * i + 1);
    if (!buffer)
        return (NULL);
    close(fd);
    return (ft_buffer(file, buffer, i));
}

int main(void)
{
    printf("%s", convert_file("numbers.dict"));
} 
