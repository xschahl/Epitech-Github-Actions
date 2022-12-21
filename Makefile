##
## EPITECH PROJECT, 2022
## xavier_schahl
## File description:
## Makefile
##

SRC =  $(shell find src/ -name "*.c")

OBJ =  $(SRC:.c=.o)

LIB =  -I ../include/ -L lib/ -lmy

FLAG =	-Wall -Wextra -g

TEST = --coverage -lcriterion

UNIT =  $(shell find tests/ -name "*.c")

NAME =	main

all:		$(OBJ)
	@make -C ./lib/my
	gcc -o $(NAME) $(OBJ) $(LIB) $(FLAGS)
	@echo "\n\033[01;38;5;10m================ Compiling: Done =======\
	=====\033[0;0m\n"

clean:
	@rm -f $(OBJ)
	@echo "\n\033[01;38;5;10m================ clean: Done =======\
	=========\033[0;0m\n"

fclean:		clean
	@rm -f $(NAME)
	@echo "\n\033[01;38;5;10m================ fclean: Done =======\
	========\033[0;0m\n"

re:	        fclean all

unit_tests:
	rm -f unit_tests *.gcda *.gcno
	make -C ./lib/my
	gcc -o unit_tests $(SRC) $(UNIT) $(TEST) $(LIB)
	"\n\033[01;38;5;10m================ Compiling tests: Done ======\
	=\033[0;0m\n"

run_tests:	unit_tests
	./unit_tests
	
tclean:	    clean
	rm -f unit_tests *.gcda *.gcno
	@echo "\n\033[01;38;5;10m================ tclean: Done =======\
	========\033[0;0m\n"

.PHONY: $(NAME) all clean fclean re
