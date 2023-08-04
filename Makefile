SRC = 	src/main.cpp \
		src/Arme.cpp \
		src/Personnages.cpp

OBJ	=	$(SRC; .cpp = .o)

NAME =	gpad'id

LIB =	-lstdc++

all :	$(NAME)

$(NAME):	$(OBJ)
	echo $(OBJ) $(NAME) $(SRC)
	gcc $(SRC) -o $(NAME) $(LIB)

clean:
	rm -rf $(OBJ)

fclean:	clean
	rm -rf $(NAME)

re:	fclean all