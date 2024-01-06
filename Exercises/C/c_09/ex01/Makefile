# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jsala <jsala@student.42barcelona>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/02 11:20:11 by jsala             #+#    #+#              #
#    Updated: 2023/11/03 13:36:18 by jsala            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

ROOT_DIR = $(shell pwd)

SRC_FILES = ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c

SRCS = $(addprefix $(ROOT_DIR)/srcs/, $(SRC_FILES))

O_FILES = $(SRCS:.c=.o)

NAME = libft.a

C_FLAGS = -Wall -Wextra -Werror 

HEADER_DIR = $(ROOT_DIR)/includes/

OUT_DIR = $(ROOT_DIR)

all : $(NAME)

.c.o:
	gcc ${C_FLAGS} -c -I ${HEADER_DIR} $< -o ${<:.c=.o}

$(NAME) : $(O_FILES)
	ar -cr $(NAME) $(O_FILES)
	ranlib $(NAME)

clean :
	rm -f $(O_FILES)

fclean : clean
	rm -f $(NAME)
	
re : fclean all

.PHONY: all clean fclean re
