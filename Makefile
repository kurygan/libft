CC = cc
FLAGS = -Wall -Wextra -Werror

SRCS = ft_putstr.c ft_strlen.c

OBJS = $(SRCS:.c=.o)
OBJS_DIR = obj/
OBJS_PREF = $(addprefix $(OBJS_DIR), $(OBJS))

NAME = libft.a

$(OBJS_DIR)%.o: %.c libft.h
	@mkdir -p $(OBJS_DIR)
	@echo "Compilings objects..."
	@cc $(FLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS_PREF)
	@ar r $(NAME) $(OBJS_PREF)
	@echo "Libft.a compiled"

clean:
	rm -rf $(OBJS_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all
