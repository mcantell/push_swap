# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcantell <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/11 22:47:28 by mcantell          #+#    #+#              #
#    Updated: 2024/04/12 04:42:08 by mcantell         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = push_swap
CFLAGS = -Wall -Werror -Wextra

SRC =	corrupt_cop.c ft_split.c ft_strncmp.c ft_atoi.c ft_free.c\
		ft_stack.c ft_substr.c main.c art.c ft_strlen.c\
		ft_cazzim.c

%.o: %.c
	gcc $(CFLAGS) -c $< -o $@


OBJ = $(SRC:.c=.o)

$(NAME): $(OBJ)
	gcc -o $(NAME) $(OBJ)

all: $(NAME)


clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all


.PHONY: all, clean, fclean, re


test: re
	rm -f $(OBJ)
	rm -f $(OBJC)
	rm -f $(OBJP)
	rm -f $(OBJC)
	clear
	echo ./$(NAME)
	-./$(NAME)
	echo
	echo ./$(NAME) '""'
	-./$(NAME) ""
	echo
	echo ./$(NAME) "''"
	-./$(NAME) ''
	echo
	echo ./$(NAME) '"   "'
	-./$(NAME) "   "
	echo
	echo ./$(NAME) 42 42
	-./$(NAME) 42 42
	echo
	echo ./$(NAME) Voglio mangiare il tuo pancreas
	-./$(NAME) Voglio mangiare il tuo pancreas
	echo
	echo ./$(NAME) '"Voglio mangiare il tuo pancreas"'
	-./$(NAME) "Voglio mangiare il tuo pancreas"
	echo
	echo ./$(NAME) '"Voglio mangiare il tuo pancreas"' 42
	-./$(NAME) "Voglio mangiare il tuo pancreas" 42
	echo
	echo ./$(NAME) '"42"' Voglio mangiare il tuo pancreas
	-./$(NAME) "42" Voglio mangiare il tuo pancreas
	echo
	echo ./$(NAME) '"++42"'
	-./$(NAME) "++42"
	echo
	echo ./$(NAME) '"--42"'
	-./$(NAME) "--42"
	echo
	echo ./$(NAME) 43 '"42 7 18 12"' 23
	-./$(NAME) 43 "42 7 18 12" 23
	echo
	echo ./$(NAME) \"\'\'\"
	-./$(NAME) "''"
