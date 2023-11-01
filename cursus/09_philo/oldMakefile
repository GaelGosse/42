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
NAME   = philo
CC     = gcc -Wall -Werror -Wextra -pthread -g3
# -fdump-rtl-expand
# -MMD -MP

SRC  := philo.c \
		init.c \
		utils.c \
		if_mtx.c \
		dinner.c \
		about_death.c \

OBJ = $(SRC:%.c=%.o)
DEPS = $(OBJ:%.o=%.d)

##### RULES #####
all: $(NAME)

$(NAME) : $(OBJ)
	@echo
	@echo "${YELLOW} ----- compile -----${NC}"
	@echo
	$(CC) $(OBJ) -o $(NAME)

%.o : %.c Makefile
	$(CC) -c $< -o $@

clean:
	@echo
	@echo "${YELLOW} ----- clean... -----${NC}"
	@echo
	rm -f $(OBJ)
	rm -f $(DEPS)
	@echo
	@echo "${YELLOW} ----- ✅ clean done -----${NC}"
	@echo

fclean :
	@echo
	@echo "${YELLOW} ----- clean...  -----${NC}"
	@echo
	make clean --no-print-directory
	rm -f $(NAME)
	@echo
	@echo "${YELLOW} ----- ✅ fclean done -----${NC}"
	@echo

re : fclean all

# -include ${DEPS}

.PHONY: clean fclean all re
