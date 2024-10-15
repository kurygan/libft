CC = cc
FLAGS = -Wall -Wextra -Werror
SRCS = ft_putstr.c	\
		ft_strlen.c	\
		main.c		\
OBJS = $(SRCS:.c=.o)
OBJS_DIR = obj/
OBJS_PREF = $(addprefix $(OBJS_DIR), $(OBJS))

%.o: %.c libft.h
	cc $(FLAGS) -c $< -o $@

all: main

main: $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o main.out


# clean:
# 	rm -rf ft_putstr.o ft_strlen.o main.o main.out