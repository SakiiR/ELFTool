CC 			= gcc

RM			= rm -f

NAME		= ELFTool

CFLAGS		+= -W -Wall -Werror -Wextra -ansi -pedantic -g3

LDFLAGS		+= 

SRCS		=  source/main.c				\
			   source/options.c				\
			   source/options_list.c		\
			   source/imports/imports.c		\
			   source/rop/rop.c				\

OBJS		= $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
		$(CC) -o $(NAME) $(OBJS) $(CFLAGS) $(LDFLAGS)

clean: 
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
