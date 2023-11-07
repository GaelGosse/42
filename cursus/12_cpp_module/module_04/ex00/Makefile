.PHONY : all clean fclean re
CC := c++
FLAGS := -std=c++98 -g3 -Wall -Wextra -Werror  -MMD -MP -I src/
#FLAGS += -fsanitize=address
SRC_DIR := src/
OBJ_DIR := obj/
RM := rm
VAL := valgrind --leak-check=full --track-origins=yes
BLACK = \033[1;30m
REDBG = \033[30;41m
RED = \033[0;31m
GREEN = \033[0;32m
ORANGE = \033[0;33m
BLUE = \033[0;34m
MAGENTA = \033[0;35m
CYAN = \033[0;36m
NC = \033[0m

# ----------------------------------- srcs ----------------------------------- #
SRCS	=	main.cpp
# --------------------------------- end srcs --------------------------------- #

SOFT_NAME := ClapTrap
OBJS = $(SRCS:%.cpp=%.o)
SRC = $(addprefix $(SRC_DIR),$(SRCS))
OBJ = $(addprefix $(OBJ_DIR),$(OBJS))
DEP = $(OBJ:%.o=%.d)
OBJF := ${OBJ_DIR}.cache_exists
all : ${SOFT_NAME}
${OBJ_DIR}%.o : $(SRC_DIR)%.cpp $(OBJF) Makefile
		${CC} ${FLAGS} -c $< -o $@
$(OBJF) :
		@mkdir -p ${OBJ_DIR}
		@touch ${OBJF}
${SOFT_NAME} : ${OBJ}
		${CC} ${OBJ} ${FLAGS} -o ${SOFT_NAME}
		@echo -e "${GREEN} Compilation OK ${NC}"
-include ${DEP}
clean :
		${RM} -rf ${OBJ_DIR} ${OBJF}
fclean : clean
		${RM} -f ${SOFT_NAME}
re : fclean all


