##
## EPITECH PROJECT, 2022
## xavier_schahl
## File description:
## Makefile
##

SRC =  $(shell find ./ -name "*.c")

OBJ =  $(SRC:.c=.o)

NAME =  libmy.a

all:	    $(OBJ)
	@ar rc $(NAME) $(OBJ)

clean:
	@rm -f $(OBJ)

fclean:     clean
	@rm -f $(NAME)

re:	    fclean all

.PHONY: $(NAME) all clean fclean re
