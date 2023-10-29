NAME		= phonebook
CC			= c++
FLAGS		= -Wall -Werror -Wextra -std=c++98
SRC			=	main.cpp \
				Contact.cpp \
				PhoneBook.cpp
OBJ			= $(SRC:.cpp=.o)
RM			= rm -f

all		: $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(FLAGS) -o $@ $^

.cpp.o	:
	$(CC) $(FLAGS) -o $@ -c $<

clean	:
	$(RM) $(OBJ)

fclean	: clean
	$(RM) $(NAME)

re		: fclean
	make all

.PHONY	: all clean fclean re