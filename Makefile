# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: knieves- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/18 17:30:00 by knieves-          #+#    #+#              #
#    Updated: 2025/01/21 21:03:47 by knieves-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Werror -Wextra
NAME = libftprintf.a
SRCS = printf.c utils.c
OBJS = $(SRCS:.C+.O)

all: $(NAME)

$(NAME): $(OBJS)
	@ar rcs $@ $^
	@echo "Libftprintf compiled successfully."
clean:
	@rm -f $(OBJS) $(BONUS_OBJS)
	@echo "Object files removed."

fclean: clean
	@rm -f $(NAME)
	@echo "Libftprintf and object files removed."
