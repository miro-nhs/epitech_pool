##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

NAME    :=      bin

CC	:=	g++
CPP	:=	.cpp

_FILES  :=      ../main	\
		Picture	\
		Toy 	\
		Woody	\
		Buzz	\

_FILES_	:=	$(addsuffix $(C), $(_FILES))

OBJ     :=      $(_FILES_:$(C)=.o)

CFLAGS	+=	-I./include -Wall -Wextra -g -std=c++14

COLOR   :=      \033[01;38;5;31m

WHITE   :=      \033[0;0m

CLEAR   :=      \033[2K

all:    $(NAME)

$(NAME):         make_all $(OBJ)
	@$(CC)  $(OBJ) -o $(NAME) $(LDFLAGS) -std=c++14
	@echo -e "$(CLEAR)$(NAME) : $(COLOR)OK$(WHITE)"
	@echo -e "\033[01;38;5;154m========================== Compiling : Done\033[0;0m"

%.o:    %.cpp
	@$(CC) -g -o $@ -c $< $(CFLAGS) $(CPP_VERSION)
	@echo -ne "$(CLEAR)Compiled $< : $(COLOR)OK$(WHITE)\r"

clean:  make_clean
	@rm -f $(NAME)
	@rm -f vgcore*
	@echo -e "$(NAME) \033[01;38;5;220m'.o' Deletion : DONE$(WHITE)"

fclean: clean
	@rm -f $(OBJ)
	@echo -e "'$(NAME)' \033[01;38;5;222mdeletion : DONE$(WHITE)"
	@echo -e "\033[01;38;5;154m========================== start Compiling :\033[0;0m"

re:     fclean  all

make_all:
	@for makefile in $(_MAKEFILES); do      \
	$(MAKE) --no-print-directory -C lib/$$makefile; \
	done

make_clean:
	@for makefile in $(_MAKEFILES); do      \
	$(MAKE) --no-print-directory -C lib/$$makefile clean;   \
		done

make_fclean:
	@for makefile in $(_MAKEFILES); do      \
	$(MAKE) --no-print-directory -C lib/$$makefile fclean;  \
		done

clean_all: fclean make_fclean

tests_run:
	@clear
	@rm -f *.gcda *.gcno
	@g++ *.cpp tests/test.cpp -o unit_tests -Wall -Wextra --coverage -lcriterion
	@./unit_tests
	@rm -f *.gcda *.gcno

rebuild: make_fclean fclean all

.PHONY: $(NAME) clean fclean re test
