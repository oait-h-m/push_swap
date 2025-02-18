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

NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror


SRC = check_arg.c ft_atoi.c ft_split.c func_helped.c linked_list.c main.c push_elements.c reverse_rotate.c rotate.c sort_elements.c sort_five_num.c swap.c 

OBJ = $(SRC:.c=.o)

all: $(NAME)

.c: .o
	$(CC) $(CFLAGS) -c $@ -o $^

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $^ -o $@

clean:
	rm -rf $(OBJ)

fclean: clean

re: fclean all
