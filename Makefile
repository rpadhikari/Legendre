CC=gcc -c
LD=gcc
SRC=P0x.c P1x.c Legendre.c main.c
OBJ=P0x.o P1x.o Legendre.o main.o
lp:
	$(CC) $(SRC)
	$(LD) $(OBJ) -o lp.x -lm
	rm -rf *.o
clean:
	rm -rf *.o *.x

