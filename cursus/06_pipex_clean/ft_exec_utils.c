/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exec_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 16:36:49 by ggosse            #+#    #+#             */
/*   Updated: 2023/01/24 16:37:19 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pipex.h"

void	ft_init_file_n_pipe(t_dt *data_ppx, char **argv, int argc)
{
	data_ppx->fd_in_f = open(argv[1], O_RDWR, 0777);
	data_ppx->fd_out_f = open(argv[argc - 1], O_CREAT | O_RDWR | O_TRUNC, 0777);
	if (data_ppx->fd_in_f == -1)
		ft_error("No such file or directory\n");
	if (pipe(data_ppx->fd_std) == -1)
		exit (1);
}

void	ft_close(t_dt *data_ppx)
{
	close(data_ppx->fd_std[0]);
	close(data_ppx->fd_std[1]);
	if (data_ppx->fd_in_f > 2)
		close(data_ppx->fd_in_f);
	if (data_ppx->fd_out_f > 2)
		close(data_ppx->fd_out_f);
}

void	ft_close_ch(t_dt *data_ppx)
{
	ft_close(data_ppx);
	ft_free_data_cmd(data_ppx);
	exit(1);
}
