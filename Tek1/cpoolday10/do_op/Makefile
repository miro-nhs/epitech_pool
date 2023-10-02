##
## EPITECH PROJECT, 2021
## MAKEFILE
## File description:
## MAKEFILE
##

NAME    =	do-op

SRC		=	do_op.c \
			calc.c  \

OBJ		=	$(SRC:.c=.o)

CC		=	gcc

RM		=	rm -f

CFLAGS	=	-g

LFLAGS	=	-L ../lib/my -lmy

all: $(NAME)

$(NAME): $(OBJ)
		$(CC) -o $(NAME) $(OBJ) $(CFLAGS) $(LFLAGS) -Wall -Wextra
		$(RM) $(OBJ)


clean:
		$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re