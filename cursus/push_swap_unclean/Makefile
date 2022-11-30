CC		= gcc

NAME	= push_swap.a

CFLAGS	= -Wall -Wextra -Werror

OPTIONS	= -c -I.

SRC		= *.c libft/*.c

OBJ		= *.o

all: $(NAME)

$(NAME): $(OBJ)
	@ar -crs $(NAME) $(OBJ)

$(OBJ): $(SRC)
	@$(CC) $(CFLAGS) $(OPTIONS) $(SRC)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re
