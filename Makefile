CC = cc
FLAGS = -Wall -Wextra -Werror
TEST = ft_itoa.c

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
			 ft_strrchr.c \
			 ft_putchar_fd.c \
			 ft_putstr_fd.c \
			 ft_putendl_fd.c \
			 ft_substr.c \
			 ft_strjoin.c \
			 ft_strtrim.c \
			 ft_itoa.c

OBJS = $(SRCS:.c=.o)
OBJS_DIR = obj/
OBJS_PREF = $(addprefix $(OBJS_DIR), $(OBJS))

NAME = libft.a

$(OBJS_DIR)%.o: %.c
	@echo "Compiling $@"
	@mkdir -p $(OBJS_DIR)
	@cc $(FLAGS) -c $< -o $@

$(NAME): $(OBJS_PREF) signature
	@echo "Archive Created"
	@ar rcs $(NAME) $(OBJS_PREF)

all: $(NAME)

clean:
	@rm -rf $(OBJS_DIR)
	@echo "Removing objects.."

fclean: clean signature
	@rm -f $(NAME)
	@echo "Cleaning.."

test: all $(TEST)
	@cc $(FLAGS) $(TEST) libft.a -o $(TEST:.c=)
	@./$(TEST:.c=)
	@rm -rf ./$(TEST:.c=)

re: fclean all signature

so:
	$(CC) -nostartfiles -fPIC $(FLAGS) $(SRCS)
	gcc -nostartfiles -shared -o libft.so $(OBJS_PREF)

signature:
	@clear
	@echo ""
	@echo ""
	@echo ""
	@echo ""
	@echo ""
	@echo "        ,====,,'''',,,             _____________________________________"
	@echo " _______||__||_______ ''',       /'                                    |"
	@echo "|    | |      | |    |    ;    /'  Name: ____Kurygan (mkettab)________ |"
	@echo "|   CMIYGL    | |    |   ;   / o   Address: __mkettab@student.42.fr___ |"
	@echo "|    | |      | |    |    '''\     School: ______42_Mulhouse__________ |"
	@echo "|    | |      IGOR   |        \`\          __CALL_ME_IF_YOU_GET_LOST___ |"
	@echo "|  OFWGKTA    | |    |          \`\.____________________________________|"
	@echo "|____|_|______|_|____|"
	@echo ""
	@echo ""
	@echo ""
	@echo ""
	@echo ""