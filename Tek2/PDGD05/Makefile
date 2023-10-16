##
## EPITECH PROJECT, 2022
## my_printf
## File description:
## Makefile
##

NAME    =	libstring.a

SRC		=	ex00.c\
			struct.c\
			ex01.c


OBJ		=	$(SRC:.c=.o)

RM		=	rm -f

TEST	=	my_printf

CRFLAGS =	-Iinclude -lcriterion --coverage

all: $(NAME)
		@echo "\033[1;37m\033[1;42m                     Lib 📚️\
	                      \033[0m"

$(NAME): $(OBJ)
		ar rc $(NAME) $(OBJ)


clean:
		$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME)
		$(RM) *.gcno
		$(RM) *.gcda


unit_tests:
	gcc -fno-builtin $(SRC) -o $(TEST) test/test_my_printf.c $(CRFLAGS)

tests_run: unit_tests
	./$(TEST)

re: fclean all

try: re
	gcc test.c -L.
	./a.out
	rm -f a.out
	make fclean

debug: re
	gcc test.c -L. -lstring -g -lstring
	valgrind ./a.out --leak-check=full
	rm -f a.out
	make fclean

.PHONY: all clean fclean try re debug
