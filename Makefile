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
<<<<<<< HEAD
FILL_SRCS = main.c get_next_line.c \
SRCS = $(addprefix $(SRCS_DIR), $(FILL_SRCS))
LIB = make -C ./libft/
=======
FILL_SRCS = main.c get_next_line.c#put_in_lists.c create_grid.c put_coords.c
SRCS = $(addprefix $(SRCS_DIR), $(FILL_SRCS))
#LIB = make -C ./libft/
>>>>>>> 94b92d530dc4a5f65617f7abc9a388ac953a52a7

all: $(NAME)

$(NAME):
<<<<<<< HEAD
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
=======
#		$(LIB)
		@$(CC) $(CFLAGS) -c $(SRCS) $(INCL)
		@$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(INCL_LIB)

clean:
	rm -rf $(OBJS)
#	make -C libft/ clean

fclean: clean
	rm -rf $(NAME)
#	make -C ./libft/ fclean
>>>>>>> 94b92d530dc4a5f65617f7abc9a388ac953a52a7

re: fclean all
