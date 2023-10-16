##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Makefile
##

SRC = pushswap_checker.hs

NAME = pushswap_checker

CFLAGS = -Wall -g

all: $(NAME)

$(NAME):
		ghc $(SRC) --make -o $(NAME)

clean:
		rm -f $(OBJ)
		rm -f *.hi
		rm -f *.o

fclean: clean
		rm -f $(NAME)

re: fclean all
