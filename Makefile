CC = cc
FLAGS = -Wall -Wextra -Werror
TEST = ft_strdup.c

SRCS = ft_strnstr.c \
			 ft_strncmp.c \
			 ft_strchr.c \
			 ft_atoi.c \
			 ft_toupper.c \
			 ft_tolower.c \
			 ft_isascii.c \
			 ft_isprint.c \
			 ft_isdigit.c \
			 ft_isalnum.c \
			 ft_isalpha.c \
			 ft_strlen.c \
			 ft_memset.c \
			 ft_memchr.c \
			 ft_memcmp.c \
			 ft_bzero.c \
			 ft_memcpy.c \
			 ft_memmove.c \
			 ft_strlcpy.c \
			 ft_calloc.c \
			 ft_strdup.c \
			 ft_strlcat.c \
			 ft_strrchr.c

OBJS = $(SRCS:.c=.o)
OBJS_DIR = obj/
OBJS_PREF = $(addprefix $(OBJS_DIR), $(OBJS))

NAME = libft.a

$(OBJS_DIR)%.o: %.c libft.h
	@mkdir -p $(OBJS_DIR)
	@cc $(FLAGS) -c $< -o $@
	@echo "Compiling $@"

$(NAME): $(OBJS_PREF)
	@echo "Archive Created"
	@ar rcs $(NAME) $(OBJS_PREF)

all: $(NAME)

clean:
	@rm -rf $(OBJS_DIR)
	@echo "Removing objects.."

fclean: clean
	@rm -f $(NAME)
	@echo "Cleaning.."

test: all $(TEST)
	@cc $(FLAGS) $(TEST) libft.a -o $(TEST:.c=)
	@./$(TEST:.c=)
	@rm -rf ./$(TEST:.c=)

re: fclean all
