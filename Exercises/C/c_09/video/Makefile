MY_VAR = this is a string

MY_OTHER_VAR = hello $(MY_VAR)

MY_OTHER_VAR += "Bye !"

NAME = my program name

MY_SOURCES = ft_putchar.c \
			 main.c

MY_OBJECTS = $(MY_SOURCES:.c=.o) 

CFLAGS += -Wall 

CUR_DIR = $(shell pwd) 

a_prog: ft_putchar.o main.o
		cc -o this_prog ft_putchar.o main.o
	
my_rule: sub_rule
		echo I will compile my files $(MY_SOURCES)

sub_rule:
		echo This is my rule, in $(CUR_DIR)
