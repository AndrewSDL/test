all: main

main: Objects/main.o Objects/basic.o Objects/selection.o
		gcc Objects/main.o Objects/basic.o Objects/selection.o -o main

Objects/main.o: main.c
		gcc -c main.c -o Objects/main.o

Objects/basic.o: basic.c
		gcc -c basic.c -o Objects/basic.o
		
Objects/selection.o: selection.c
		gcc -c selection.c -o Objects/selection.o
		
clean:
		rm -rf Objects/*.o main