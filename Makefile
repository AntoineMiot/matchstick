##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## 
##

SRC	=	main.c	\
		create_map.c	\
		disp_map.c	\
		ia_map.c	\
		multi_check.c	\
		multi_check_two.c	\
		multi_check_three.c	\
		multi_check_four.c

OBJ		=	$(SRC:.c=.o)

NAME	=	matchstick

all:	$(NAME)

$(NAME):	$(OBJ)
	make -C lib/my/
	gcc -o $(NAME) $(OBJ) -L./lib -lmy -I./include
	rm *.o

clean:
	rm -f $(OBJ)
	rm -f vgcore.*
	rm -f *.o

fclean:	clean
	make fclean -C lib/my/
	rm -f $(NAME)

re:	fclean all
