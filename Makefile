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
B_NAME = checker

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC = check_arg.c ft_atoi.c ft_split.c func_helped.c linked_list.c main.c push_elements.c reverse_rotate.c \
	  rotate.c sort_elements.c sort_five_num.c swap.c help_fun2.c 

SRC_B = b_main.c check_arg.c ft_atoi.c ft_split.c func_helped.c get_next_line.c get_next_line_utils.c \
		help_fun2.c linked_list.c push_elements.c reverse_rotate.c rotate.c sort_elements.c sort_five_num.c swap.c

OBJ_S = $(SRC:.c=.o)
OBJ_B = $(SRC_B:.c=.o)

RM = rm -rf

all: $(NAME)

bonus: $(B_NAME)

$(NAME): $(OBJ_S)
	$(CC) $(CFLAGS) $(OBJ_S) -o $(NAME)

$(B_NAME): $(OBJ_B)
	$(CC) $(CFLAGS) $(OBJ_B) -o $(B_NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ_S) $(OBJ_B)

fclean: clean
	$(RM) $(NAME) $(B_NAME)

re: fclean all

