##
## EPITECH PROJECT, 2023
## B-PDG-300-STG-3-1-PDGRUSH3-thomas.parenteau
## File description:
## Makefile
##

SRC	=	Module/Os.cpp 						\
		Module/Processor.cpp 				\
		Module/Ram.cpp 						\
		Module/Time.cpp 					\
		Module/User.cpp 					\
		Graphics/MonitorDisplay.cpp 		\
		Graphics/MonitorDisplayNcurses.cpp 	\
		Graphics/MonitorDisplaySfml.cpp 	\
		main.cpp 							\

EXEC	=	MyGKrellm

CPPFLAGS = -Iinclude -lsfml-system -lsfml-window -lsfml-graphics -lncurses -lutil -g

all:    $(EXEC)

$(EXEC):	$(OBJ)
	g++ -g -o $(EXEC) $(SRC) $(CPPFLAGS)

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(EXEC)
	rm -rf vgcore.*

re:	fclean all

.PHONY: clean fclean re all