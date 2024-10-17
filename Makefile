CC = cc
FLAGS = -Wall -Wextra -Werror
TEST = ft_strchr.c

SRCS = ft_strchr.c ft_atoi.c ft_toupper.c ft_tolower.c ft_isascii.c ft_isprint.c ft_isdigit.c ft_isalnum.c ft_isalpha.c ft_strlen.c

OBJS = $(SRCS:.c=.o)
OBJS_DIR = obj/
OBJS_PREF = $(addprefix $(OBJS_DIR), $(OBJS))

NAME = libft.a

$(OBJS_DIR)%.o: %.c libft.h
	@mkdir -p $(OBJS_DIR)
	@cc $(FLAGS) -c $< -o $@

$(NAME): $(OBJS_PREF)
	@echo "Compiling..."
	@ar r $(NAME) $(OBJS_PREF)

all: $(NAME)

clean:
	@rm -rf $(OBJS_DIR)
	@echo "Removing objects.."

fclean: clean
	@rm -f $(NAME)
	@echo "Cleaning.."

test: $(TEST)
	@cc $(FLAGS) $(TEST) -o test.out
	@./test.out
	@rm -rf ./test.out

re: fclean all
