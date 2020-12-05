#example of make file

SRC = main.c
OBJ = main.o

PROG= myProgram$(PROG):(OBJ)
	gcc $(OBJ) -o $(PROG)
	
$(OBG):$(SRC)

