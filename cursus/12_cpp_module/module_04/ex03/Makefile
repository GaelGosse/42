NAME = interface
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -g
DFLAGS = -MMD
MKDIR = mkdir -p
RM = rm -f
MAKE_SILENT = make --no-print-directory
PURPLE = \033[35m
GREEN = \033[32m
YELLOW = \033[33m
END = \033[0m
SRC_DIR = src/
HEADER_DIR = includes/
OBJ_DIR = obj/
# ----------------------------------- srcs ----------------------------------- #
SRC	=	AMateria.cpp \
		Character.cpp \
		Cure.cpp \
		Ice.cpp \
		ICharacter.cpp \
		IMateriaSource.cpp \
		main.cpp \
		MateriaSource.cpp
# --------------------------------- end srcs --------------------------------- #

#---------------------------------- headers -----------------------------------#
HEAD = $(addprefix $(HEADER_DIR), \
		AMateria.hpp \
		Character.hpp \
		Color.hpp \
		Cure.hpp \
		Ice.hpp \
		ICharacter.hpp \
		IMateriaSource.hpp \
		MateriaSource.hpp \
)
#-------------------------------- end headers ---------------------------------#

OBJ = $(addprefix $(OBJ_DIR), $(SRC:.cpp=.o))
all : $(OBJ_DIR) $(NAME)
$(NAME) : $(OBJ)
	@echo -e "$(YELLOW)Making CPP Exercise$(END)"
	$(CXX) $(OBJ) -o $(NAME)
	@echo -e "$(GREEN)Done$(END)"
$(OBJ_DIR)%.o : $(SRC_DIR)%.cpp $(HEAD) Makefile
	$(CXX) $(CXXFLAGS) $(DFLAGS) -c $< -o $@
$(OBJ_DIR) :
	@$(MKDIR) $(OBJ_DIR)
clean :
	@echo -e "$(RED)Cleaning CPP Exercise's objects...$(END)"
	@$(RM) -r $(OBJ_DIR)
	@echo -e "$(GREEN)Done$(END)"
fclean : clean
	@echo -e "$(RED)Cleaning CPP Exercise...$(END)"
	@$(RM) $(NAME)
	@echo -e "$(GREEN)Done$(END)"
re : fclean
	@$(MAKE_SILENT) all


