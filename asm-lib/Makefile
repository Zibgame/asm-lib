# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zcadinot <zcadinot@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/17 16:23:49 by zcadinot          #+#    #+#              #
#    Updated: 2025/11/17 16:28:18 by zcadinot         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# **************************************************************************** #
#                                   asm-lib                                     #
# **************************************************************************** #

NAME = asm-lib.a
EXEC = main

CC = gcc
CFLAGS = -Wall -Wextra -Werror -I include

SRC = $(wildcard src/*.c)
OBJ = $(SRC:.c=.o)

MAIN_SRC = main.c
MAIN_OBJ = $(MAIN_SRC:.c=.o)

all: $(NAME) $(EXEC)

# Build library
$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

# Build executable linked with the library
$(EXEC): $(MAIN_OBJ) $(NAME)
	$(CC) $(CFLAGS) $(MAIN_OBJ) $(NAME) -o $(EXEC)

clean:
	rm -f $(OBJ) $(MAIN_OBJ)

fclean: clean
	rm -f $(NAME) $(EXEC)

re: fclean all

.PHONY: all clean fclean re
