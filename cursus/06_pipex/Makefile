NAME = pipex
CC = gcc -Wall -Werror -Wextra

SRC             := ft_exec.c \
				ft_exec_utils.c \
				ft_find_path.c \
				ft_free_n_err.c \
				ft_pipex.c

OBJ = $(SRC:%.c=%.o)


all: $(NAME)

$(NAME) : $(OBJ)
	$(MAKE) --no-print-directory -C libft
	$(CC) $(OBJ) libft/libft.a -o $(NAME) -g

%.o : %.c
	$(CC) -c $< -o $@

clean:
	rm -f $(OBJ)
	make fclean --no-print-directory -C libft

fclean : 
	make clean --no-print-directory
	rm -f $(NAME)

re : fclean all

.PHONY: clean fclean all re
