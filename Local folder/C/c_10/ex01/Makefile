# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jsala <jsala@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/04 09:54:04 by jsala             #+#    #+#              #
#    Updated: 2023/11/07 16:27:16 by jsala            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ./ft_cat.c ./ft_utils.c

O_FILES = $(SRC:.c=.o)

NAME = ft_cat

C_FLAGS = -Wall -Wextra -Werror

RM = rm -f

all : $(NAME)

.c.o :
	cc ${C_FLAGS} -c $< -o ${<:.c=.o}

$(NAME) : $(O_FILES)
	cc $(C_FLAGS) $(O_FILES) -o $(NAME)

clean :
	$(RM) $(O_FILES)

fclean : clean
	$(RM) $(NAME)

.PHONY: all clean fclean
