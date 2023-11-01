/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 14:10:55 by gael              #+#    #+#             */
/*   Updated: 2023/10/30 19:16:25 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_minishell.h"

int	is_built_in(t_mini_sh *mini_sh)
{
	if (ft_strncmp(mini_sh->rl_out->word, "pwd", \
		ft_strlen(mini_sh->rl_out->word)) == 0)
		return (SUCCESS);
	else if (ft_strncmp(mini_sh->rl_out->word, "cd", \
		ft_strlen(mini_sh->rl_out->word)) == 0)
		return (SUCCESS);
	else if (ft_strncmp(mini_sh->rl_out->word, "echo", \
		ft_strlen(mini_sh->rl_out->word)) == 0)
		return (SUCCESS);
	else if (ft_strncmp(mini_sh->rl_out->word, "unset", \
		ft_strlen(mini_sh->rl_out->word)) == 0)
		return (SUCCESS);
	else if (ft_strncmp(mini_sh->rl_out->word, "env", \
		ft_strlen(mini_sh->rl_out->word)) == 0)
		return (SUCCESS);
	else if (ft_strncmp(mini_sh->rl_out->word, "export", \
		ft_strlen(mini_sh->rl_out->word)) == 0)
		return (SUCCESS);
	else if (ft_strncmp(mini_sh->rl_out->word, "echo", \
		ft_strlen(mini_sh->rl_out->word)) == 0)
		return (SUCCESS);
	else if (ft_strncmp(mini_sh->rl_out->word, "exit", \
		ft_strlen(mini_sh->rl_out->word)) == 0)
		return (SUCCESS);
	return (FAIL);
}

void	put_word_in_minish(t_mini_sh *mini, char *lne, int *sv, int *ite)
{
	if ((*ite) - (*sv) > 0)
	{
		if (mini->rl_out == NULL)
		{
			mini->rl_out = ft_lstnew_word(lne, (*sv), (*ite));
			mini->rl_out_head = mini->rl_out;
		}
		else
			ft_lstadd_back((&mini->rl_out), ft_lstnew_word(lne, (*sv), (*ite)));
	}
}

int	build_result_output(t_mini_sh *mini_sh, char *line)
{
	int	ite;
	int	save;

	mini_sh->rl_out = NULL;
	save = 0;
	ite = 0;
	if (!mini_sh->output[0])
		return (FAIL);
	while (line[ite])
	{
		while (ft_is_sep_parse(line[ite]) == SUCCESS)
			ite++;
		save = ite;
		while (line[ite] != '\0' && ft_is_sep_parse(line[ite]) == FAIL)
		{
			count_quote_arg(line, &ite);
			ite++;
		}
		put_word_in_minish(mini_sh, line, &save, &ite);
	}
	return (SUCCESS);
}

int	check_rdr_follow(t_mini_sh *mini_sh)
{
	int	err;

	err = FAIL;
	mini_sh->rl_out = mini_sh->rl_out_head;
	while (mini_sh->rl_out)
	{
		if (is_sep_int(mini_sh->rl_out->type) == SUCCESS \
		&& mini_sh->rl_out->next \
		&& is_sep_int(mini_sh->rl_out->next->type) == SUCCESS)
			err = SUCCESS;
		if (is_sep_int(mini_sh->rl_out->type) == SUCCESS && \
		(mini_sh->rl_out->next && (ft_strncmp(">", \
		mini_sh->rl_out->next->word, 0) == 0 || ft_strncmp("<", \
		mini_sh->rl_out->next->word, 0) == 0 || ft_strncmp(">>", \
		mini_sh->rl_out->next->word, 1) == 0 || ft_strncmp("<<", \
		mini_sh->rl_out->next->word, 1) == 0)))
			err = SUCCESS;
		if (mini_sh->rl_out->type == PIPE && mini_sh->rl_out->next \
		&& issep_read(mini_sh->rl_out->next->type) == SUCCESS)
			err = FAIL;
		if (err == SUCCESS)
			return (print_error(4, mini_sh->rl_out), SUCCESS);
		mini_sh->rl_out = mini_sh->rl_out->next;
	}
	return (FAIL);
}

int	ft_parsing(t_mini_sh *mini_sh)
{
	mini_sh->is_dquote = FAIL;
	mini_sh->is_squote = FAIL;
	if (check_quote_is_closed(mini_sh->output) > 0)
	{
		printf(GREEN"mini_sh->output: %s"RESET"\n", mini_sh->output);
		all_glue(mini_sh);
		printf(GREEN"mini_sh->output: %s"RESET"\n", mini_sh->output);
		if (build_result_output(mini_sh, mini_sh->output) < 0)
			return (FAIL);
		expand(mini_sh);
		if (set_type(mini_sh) == FAIL)
			return (FAIL);
		if (check_rdr_follow(mini_sh) == SUCCESS)
			return (FAIL);
		remove_quote_2(mini_sh);
		if (check_redi_r_append_error(mini_sh) == FAIL)
		set_index(mini_sh);
		all_move(mini_sh);
		// ft_print_rl_out(mini_sh);
		if (check_redi_r_append_error(mini_sh) == FAIL)
			return (FAIL);
		if (prepare_exec(mini_sh) < 0)
			return (FAIL);
	}
	else
		return (FAIL);
	return (SUCCESS);
}
void	print_word(char *new_w)
{
	int	x;

	x = 0;
	while (new_w[x])
	{
		printf(BACK_CYAN"%c"RST"", new_w[x]);
		x++;
	}
	printf(BACK_RED"%i"RST"\n", new_w[x]);
}

void	print_word2(char *new_w)
{
	int	x;

	x = 0;
	while (new_w[x])
	{
		printf(BACK_PURPLE"%c"RST"", new_w[x]);
		x++;
	}
	printf(BACK_YELLOW"%i"RST"\n", new_w[x]);
}

void	ft_print_rl_out(t_mini_sh *mini_sh)
{
	t_parse	*tmp;
	int	i;

	i = 0;
	tmp = mini_sh->rl_out_head;
	printf("\n...............start..................\n\n");
	while (tmp->prev)
		tmp = tmp->prev;
	while (tmp)
	{
		print_word(tmp->word);
		if (tmp->type)
			print_type(tmp->type);
		if (!tmp->next)
			break ;
		tmp = tmp->next;
		i++;
	}
	printf("\n............end................\n\n");
}

void	print_type(int type)
{
	if (type == CMD)
		fprintf(stderr, BLUE"CMD"RST"\n");
	else if (type == CMD_ABS)
		fprintf(stderr, BLUE"CMD_ABS"RST"\n");
	else if (type == PIPE)
		fprintf(stderr, BLUE"PIPE"RST"\n");
	else if (type == ARG)
		fprintf(stderr, BLUE"ARG"RST"\n");
	else if (type == REDIR_L)
		fprintf(stderr, BLUE"REDIR_L"RST"\n");
	else if (type == APPEND)
		fprintf(stderr, BLUE"APPEND"RST"\n");
	else if (type == HR_DOC)
		fprintf(stderr, BLUE"HR_DOC"RST"\n");
	else if (type == REDIR_R)
		fprintf(stderr, BLUE"REDIR_R"RST"\n");
	else if (type == OPTION)
		fprintf(stderr, BLUE"OPTION"RST"\n");
	else if (type == _FILE)
		fprintf(stderr, BLUE"_FILE"RST"\n");
	else if (type == BUILT_IN)
		fprintf(stderr, BLUE"BUILT_IN"RST"\n");
	else if (type == EOFL)
		fprintf(stderr, BLUE"EOFL"RST"\n");
	else
		fprintf(stderr, BACK_RED"0"RST"\n");
	fprintf(stderr, "\n");
}