SRC	= ft_check.c \
	ft_cost.c \
	ft_index.c \
	ft_init_list.c \
	ft_presort.c \
	ft_push_swap.c \
	ft_sort.c
NAME	= push_swap
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
OBJ		= $(SRC:.c=.0)

all: $(NAME)

$(NAME): $(OBJ)
		$(CC) -o $(NAME) $(CFLAGS) $(OBJ)

%.o

clean: 

fclean: clean

re: fclean all

.PHONY: clean fclean all re
