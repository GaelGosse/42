CC            = gcc

NAME          = libftprintf.a

CFLAGS        = -Wall -Wextra -Werror

OPTIONS        = -c -I.

SRC            = ft_printf.c ft_tools.c libft/*.c

OBJ            = *.o

all: $(NAME)

$(NAME): $(OBJ)
	ar -crs $(NAME) $(OBJ)

$(OBJ): $(SRC)
	$(CC) $(CFLAGS) $(OPTIONS) $(SRC)

clean:
	@echo "Removing objects files of $(NAME)"
	rm -f $(OBJ)
	@echo "Files object removed successfully from $(NAME)"

fclean: clean
	@echo "Removing $(NAME)"
	rm -f $(NAME)
	@echo "$(NAME) removed, goodbye!"

re: fclean all

.PHONY: clean fclean all re