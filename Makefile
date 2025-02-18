# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oait-h-m <oait-h-m@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/18 01:06:45 by oait-h-m          #+#    #+#              #
#    Updated: 2025/02/18 01:43:20 by oait-h-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
FLAGS = -Wall -Wextra -Werror
NAME = push_swap
SRC = check_arg.c ft_atoi.c ft_split.c func_helped.c linked_list.c \
	  main.c push_elements.c reverse_rotate.c rotate.c sort_elements.c \
	  sort_five_num.c swap.c \

OBJS = $(SRC:.c=.o)


all: $(NAME)

%.o: %.c
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

$(NAME): $(OBJS)
	ar rcs ${NAME} $(OBJS)

clean:
	rm -rf *.o

fclean: clean 

re: fclean all
