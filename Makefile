CC = gcc
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
			 ft_itoa.c \
			 ft_split.c \
			 ft_strmapi.c \
			 ft_striteri.c \
			 ft_putnbr_fd.c

SRCS_BONUS = ft_lstnew.c \
						 ft_lstadd_front.c \
						 ft_lstsize.c \
						 ft_lstlast.c \
						 ft_lstadd_back.c \
						 ft_lstdelone.c \
						 ft_lstclear.c \
						 ft_lstiter.c \
						 ft_lstmap.c

OBJS = $(SRCS:.c=.o)
OBJS_BONUS = $(SRCS_BONUS:.c=.o)

NAME = libft.a

.o.c:
	@cc $(FLAGS) -c $< -o $($<.c=.o)

$(NAME): $(OBJS)
	@echo "Archive Compiled"
	@ar rcs $(NAME) $(OBJS)

all: $(NAME)

bonus: $(OBJS_BONUS)
	@ar rcs $(NAME) $(OBJS_BONUS)
	@echo "Bonus Archive Compiled"

clean:
	@rm -rf $(OBJS) $(OBJS_BONUS)
	@echo "Removing objects.."

fclean: clean
	@rm -f $(NAME)
	@echo "Cleaning.."

re: fclean all

.PHONY: re fclean clean bonus all