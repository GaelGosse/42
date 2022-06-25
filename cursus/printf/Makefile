NAME = libftprintf.a

CC = gcc -Wall -Wextra -Werror

SRC = ft_printf.c \
	ft_tools.c \
	libft/ft_putchar_fd.c \
	libft/ft_putnbr_base_low.c \
	libft/ft_putnbr_base_up.c \
	libft/ft_putnbr_fd.c \
	libft/ft_putstr_fd.c \
	libft/ft_putunbr.c

OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	ar rc $(NAME) $^

%.o : %.c
	$(CC) -c $^

bonus : $(OBJ)
	ar rc $(NAME) $^

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all bonus clean fclean re