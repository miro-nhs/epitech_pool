##
## EPITECH PROJECT, 2023
## PDG
## File description:
## Makefile
##

NAME := Z

CC	:=	g++
CPP	:=  .cpp

_FILES  :=  Z\

_FILES_	:=	$(addsuffix $(C), $(_FILES))

OBJ     :=      $(_FILES_:$(C)=.o)

CFLAGS	+=	-I./include -Wall -Wextra -g

all:    $(NAME)

$(NAME):         make_all $(OBJ)
	@$(CC)  $(OBJ) -o $(NAME) $(LDFLAGS) -std=gnu11

%.o:    %.cpp
	@$(CC) -g -o $@ -c $< $(CFLAGS) $(CPP_VERSION)

clean:  make_clean
	@rm -f $(NAME)
	@rm -f vgcore*

fclean: clean
	@rm -f $(OBJ)

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

run: all
	@./$(NAME)

test: re
	@./$(NAME)

val: re
	@valgrind ./$(NAME)

rebuild: make_fclean fclean all

.PHONY: $(NAME) clean fclean re test
