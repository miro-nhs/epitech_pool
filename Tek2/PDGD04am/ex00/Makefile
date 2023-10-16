##
## EPITECH PROJECT, 2023
## PDG
## File description:
## Makefile
##

NAME	=	z

SRC		=	z.c

CFLAGS	+=	-std=gnu11 -W -Wall -Wextra -Iinclude

OBJ		=	$(SRC:.c=.o)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) $(CFLAGS)

debug:
	gcc -o $(NAME) $(SRC) $(CFLAGS) -g

all:	$(NAME)

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(OBJ)
	rm -f $(NAME) $(NAME_TEST)

re: fclean all

.PHONY: all clean fclean re debug
