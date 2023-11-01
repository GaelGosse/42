##### Colors ####
BLACK	= \033[1;30m
REDBG	= \033[30;41m
RED		= \033[0;31m
GREEN	= \033[0;32m
ORANGE	= \033[0;33m
BLUE	= \033[0;34m
MAGENTA	= \033[0;35m
CYAN	= \033[0;36m
END		= \033[0m

SRCSDIR	= srcs
OBJSDIR	= objs
INCSDIR	= incs

NAME	= philo
CC		= gcc
CFLAGS	= -Wall -Werror -Wextra

_SRCS	=	about_death.c \
			dinner.c \
			if_mtx.c \
			init.c \
			philo.c \
			utils.c
SRCS	= $(addprefix $(SRCSDIR)/, $(_SRCS))
OBJS	= $(SRCS:$(SRCSDIR)%.c=$(OBJSDIR)%.o)
HEADER = $(addprefix $(INCSDIR)/, $(NAME).h)

##### Makefile work ####

$(OBJSDIR)/%.o:$(SRCSDIR)/%.c $(HEADER)
	@mkdir -p $(OBJSDIR)
	@$(CC) -c $(CFLAGS) -I$(INCSDIR)  $< -o $@

all: $(NAME)

$(NAME): $(OBJS) $(HEADER)
	@echo -e "Baking $(NAME)..."
	@echo -e "compile	[ $(GREEN)OK$(END) ]"

clean:
	@echo -e "Removing objects..."
	@rm -r $(OBJSDIR) || true
	@echo -e "$(GREEN)Done!$(END)"

fclean: clean
	@echo -e "Cleaning everything..."
	@rm -f $(NAME)
	@echo -e "$(GREEN)Done!$(END)"
	@echo -e "$(BLUE)Everything is clean!$(END)"

re:	fclean all

.PHONY: all clean fclean re