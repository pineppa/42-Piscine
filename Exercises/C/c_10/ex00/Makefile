# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jsala <jsala@student.42barcelona>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/04 09:54:04 by jsala             #+#    #+#              #
#    Updated: 2023/11/04 14:14:45 by jsala            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ./ft_display_file.c

O_FILES = $(SRC:.c=.o)

NAME = ft_display_file

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
