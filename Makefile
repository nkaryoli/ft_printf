# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: knieves- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/18 17:30:00 by knieves-          #+#    #+#              #
#    Updated: 2025/01/22 13:11:38 by knieves-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Werror -Wextra
NAME = libftprintf.a
SRCS = ft_printf.c utils.c
HEADER = ft_printf.h
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS) $(HEADER)
	@ar rcs $@ $^
	@echo "Libftprintf compiled successfully."

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJS) $(BONUS_OBJS)
	@echo "Object files removed."

fclean: clean
	@rm -f $(NAME)
	@echo "Libftprintf and object files removed."

re: fclean all
