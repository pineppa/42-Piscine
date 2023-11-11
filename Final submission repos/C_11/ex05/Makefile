# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jsala <jsala@student.42barcelona>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/06 08:52:00 by jsala             #+#    #+#              #
#    Updated: 2023/11/06 14:58:11 by jsala            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ./do-op.c ./ft_putnbr.c ./ft_atoi.c

OBJS = $(SRCS:.c=.o)

NAME = do-op

FLAGS = -Wall -Wextra -Werror

RM = rm -f

all: $(NAME)

.c.o: 
	cc -c $(FLAGS) $< -o ${<:.c=.o}
$(NAME): $(OBJS) 
	cc $(OBJS) -o $(NAME) $(FLAGS)

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

.SILENT:
.PHONY: all clean fclean
