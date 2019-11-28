# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: slupe <slupe@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/27 17:41:04 by slupe             #+#    #+#              #
#    Updated: 2019/11/27 17:41:04 by slupe            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit
CC = gcc
CFLAGS = -Wall -Wextra -Werror
INCL = -Iincludes/
INCL_LIB = ./libft/libft.a
OBJS = main.o get_next_line.o
SRCS_DIR = srcs/
FILL_SRCS = main.c get_next_line.c \
SRCS = $(addprefix $(SRCS_DIR), $(FILL_SRCS))
LIB = make -C ./libft/

all: $(NAME)

$(NAME):
		$(CC)
		$(LIB)
		@$(CC) $(CFLAGS) -c $(SRCS) $(INCL)
		@$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(INCL_LIB)


clean:
	rm -rf $(OBJS)
	make -C libft/ clean

fclean: clean
	rm -rf $(NAME)
	make -C ./libft/ fclean

re: fclean all
