/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 14:10:55 by gael              #+#    #+#             */
/*   Updated: 2023/04/02 18:43:03 by ggosse           ###   ########.fr       */
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

char	*is_glue(char *line)
{
	int	ite;
	int	glue;

	glue = 0;
	ite = 0;
	while (line[ite])
	{
		while (ft_is_sep_parse(line[ite]) == SUCCESS)
			ite++;
		while (line[ite] != '\0' && ft_is_sep_parse(line[ite]) == FAIL)
		{
			count_quote_arg(line, &ite);
			// if ((line[ite] == '|' && ft_is_sep_parse(line[ite + 1]) == FAIL)
			// && (line[ite] == '|' && ft_is_sep_parse(line[ite - 1]) == FAIL))
			// {
			// 	printf(RED"all"RESET"\n");
			// }
			// else
			if (line[ite] == '|' && ft_is_sep_parse(line[ite - 1]) == FAIL)
			{
				printf(RED"letter left"RESET"\n");
				glue = ite;
				printf(BOLD_RED"->%s"RST"\n", ft_strdup_len(line, 0, glue));
			}
			else if (line[ite] == '|' && ft_is_sep_parse(line[ite + 1]) == FAIL)
			{
				printf(RED"letter right"RESET"\n");
				glue = ite + 1;
				printf(BOLD_RED"->%s"RST"\n", ft_strdup_len(line, 0, glue));
			}
			ite++;
		}
	}
	(void)glue;
	return (line);
}

void	put_word_in_minish(t_mini_sh *mn_sh, char *lne, int *save, int *ite)
{
	t_parse	*new;

	new = ft_lstnew_word(lne, (*save), (*ite));
	if ((*ite) - (*save) > 0)
	{
		if (mn_sh->rl_out == NULL)
		{
			mn_sh->rl_out = new;
			mn_sh->rl_out_head = mn_sh->rl_out;
		}
		else
			ft_lstadd_back((&mn_sh->rl_out), new);
	}
}

int	build_result_output(t_mini_sh *mini_sh, char *line)
{
	int	ite;
	int	save;
	int	abc;
	// int	glue;

	// glue = 0;
	mini_sh->rl_out = NULL;
	save = 0;
	abc = 0;
	while (line[abc])
		abc++;
	ite = 0;
	while (line[ite])
	{
		while (ft_is_sep_parse(line[ite]) == SUCCESS)
			ite++;
		save = ite;
		while (line[ite] != '\0' && ft_is_sep_parse(line[ite]) == FAIL)
		{
			count_quote_arg(line, &ite);
			// if ((line[ite] == '|' && ft_is_sep_parse(line[ite + 1]) == FAIL)
			// && (line[ite] == '|' && ft_is_sep_parse(line[ite - 1]) == FAIL))
			// {
			// 	printf(RED"all"RESET"\n");
			// 	put_word_in_minish(mini_sh, line, &save, &ite);
			// }
			// else if (line[ite] == '|' && ft_is_sep_parse(line[ite + 1]) == FAIL)
			// {
			// 	printf(RED"letter right"RESET"\n");
			// 	glue = ite + 1;
			// 	printf(BOLD_RED"->%s"RST"\n", ft_strdup_len(line, ite, glue));
			// 	put_word_in_minish(mini_sh, line, &ite, &glue);
			// }
			// else if (line[ite] == '|' && ft_is_sep_parse(line[ite - 1]) == FAIL)
			// {
			// 	printf(RED"letter left"RESET"\n");
			// 	glue = ite + 1;
			// 	printf(BOLD_RED"->%s"RST"\n", ft_strdup_len(line, ite, glue));
			// 	put_word_in_minish(mini_sh, line, &ite, &glue);
			// }
			ite++;
		}
		if (abc == ite)
			put_word_in_minish(mini_sh, line, &save, &ite);
		else if (0 == ite)
			put_word_in_minish(mini_sh, line, &save, &ite);
		else
			put_word_in_minish(mini_sh, line, &save, &ite);
	}
	// (void)glue;
	return (SUCCESS);
}

int	ft_parsing(t_mini_sh *mini_sh)
{
	mini_sh->is_dquote = FAIL;
	mini_sh->is_squote = FAIL;
	if (check_quote_is_closed(mini_sh->output) > 0)
	{
		// mini_sh->output = is_glue(mini_sh->output);
		if (build_result_output(mini_sh, mini_sh->output) < 0)
			return (FAIL);
		expand(mini_sh);
		if (set_type(mini_sh) == FAIL)
			return (FAIL);
		remove_quote_2(mini_sh);
		ft_print_rl_out(mini_sh);
		if (check_redi_r_append_error(mini_sh) == FAIL)
			return (FAIL);
		if (prepare_exec(mini_sh) < 0)
			return (FAIL);
	}
	else
		return (FAIL);
	return (SUCCESS);
}