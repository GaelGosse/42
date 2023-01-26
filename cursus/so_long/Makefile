##### COLOR #####
BLACK = \033[1;30m
REDBG = \033[30;41m
RED = \033[0;31m
GREEN = \033[0;32m
ORANGE = \033[0;33m
BLUE = \033[0;34m
MAGENTA = \033[0;35m
CYAN = \033[0;36m
NC = \033[0m

##### VAR #####
NAME   = so_long
CC    = gcc -Wall -Werror -Wextra

SRC  := ft_check_filemap.c \
		ft_check_format.c \
		ft_create_game.c \
		ft_so_long.c \
		ft_valid_path.c

OBJ = $(SRC:%.c=%.o)
LIBX = -L minilibx/ 
LIBXFLAGS = -lmlx -lXext -lX11 -lz -lm

##### RULES #####
all: $(NAME)

$(NAME) : $(OBJ)
	@echo
	@echo "${YELLOW} ----- compile -----${NC}"
	@echo
	$(MAKE) --no-print-directory -C libft
	$(MAKE) --no-print-directory -C minilibx
	$(CC) $(OBJ) minilibx/libmlx_Linux.a libft/libft.a $(LIBX) $(LIBXFLAGS) -g -o $(NAME) 

%.o : %.c
	$(CC) -c $< -o $@

clean:
	@echo
	@echo "${YELLOW} ----- clean...  -----${NC}"
	@echo
	rm -f $(OBJ)
	make clean --no-print-directory -C minilibx
	make fclean --no-print-directory -C libft
	@echo
	@echo "${YELLOW} ----- ✅ clean done -----${NC}"
	@echo

fclean :
	@echo
	@echo "${YELLOW} ----- clean...  -----${NC}"
	@echo
	make clean 
	rm -f $(NAME)
	@echo
	@echo "${YELLOW} ----- ✅ fclean done -----${NC}"
	@echo

re : fclean all

.PHONY: clean fclean all re
