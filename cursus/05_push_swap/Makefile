NAME	= push_swap
SRC	= ft_check.c \
	ft_cost.c \
	ft_index.c \
	ft_init_list.c \
	ft_presort.c \
	ft_push_swap.c \
	ft_sort.c \
	ft_push.c \
	ft_reverse_rotate.c \
	ft_rotate.c \
	ft_swap.c \
	ft_presort_small.c

OBJ		= $(SRC:.c=.o)
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
		$(CC) $(CFLAGS) -o $(NAME) $(CFLAGS) $(OBJ)

%.o : %.c ft_push_swap.h
		$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re
