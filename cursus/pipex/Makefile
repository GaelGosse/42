# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/13 16:17:02 by ggosse            #+#    #+#              #
#    Updated: 2022/12/13 16:20:56 by ggosse           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

##### Colors ####
BACK_BLACK			= \033[0;40m
BACK_RED			= \033[0;41;30m
BACK_GREEN			= \033[0;42;30m
BACK_YELLOW			= \033[0;43;30m
BACK_BLUE			= \033[0;44;30m
BACK_PURPLE			= \033[0;45;30m
BACK_CYAN			= \033[0;46;30m
BACK_WHITE			= \033[0;47;30m

BACK_BOLD_BLACK		= \033[1;40m
BACK_BOLD_RED		= \033[1;41;30m
BACK_BOLD_GREEN		= \033[1;42;30m
BACK_BOLD_YELLOW	= \033[1;43;30m
BACK_BOLD_BLUE		= \033[1;44;30m
BACK_BOLD_PURPLE	= \033[1;45;30m
BACK_BOLD_CYAN		= \033[1;46;30m
BACK_BOLD_WHITE		= \033[1;47;30m

UNDERLINE_BLACK		= \033[4;30m
UNDERLINE_RED		= \033[4;31m
UNDERLINE_GREEN		= \033[4;32m
UNDERLINE_YELLOW	= \033[4;33m
UNDERLINE_BLUE		= \033[4;34m
UNDERLINE_PURPLE	= \033[4;35m
UNDERLINE_CYAN		= \033[4;36m
UNDERLINE_WHITE		= \033[4;37m

RESET = \033[0m
RST = \033[0m


##### Names #####
NAME	= pipex
SRC		= *.c 
OBJ		= $(SRC:.c=.o)
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) -o $(NAME) $(CFLAGS) $(OBJ)

%.o : %.c ft_push_swap.h
	@$(CC) $(CFLAGS) -c $< -o $@

test1:
	@make -s re
	@./$(NAME) infile "ls" "grep c" outfile

test2:
	@make -s re
	@./$(NAME) infile "ls" "echo OK" "cat Makefile" "grep c" outfile

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re
