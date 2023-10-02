##
## EPITECH PROJECT, 2021
## MAKEFILE
## File description:
## MAKEFILE
##

NAME    =	cat

SRC		=	cat.c \

OBJ		=	$(SRC:.c=.o)

CC		=	gcc

RM		=	rm -f

CFLAGS	=	-g

LFLAGS	=	-L ../lib/my -lmy

all: $(NAME)

$(NAME): $(OBJ)
		make -C ../lib/my
		$(CC) -o $(NAME) $(OBJ) $(CFLAGS) $(LFLAGS) -Wall -Wextra
		$(RM) $(OBJ)


clean:
		$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re