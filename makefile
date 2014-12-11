# See here for a good makefile example
# https://stackoverflow.com/questions/14639794/getting-make-to-create-object-files-in-a-specific-directory

CFLAGS=-Werror -Wall -Wmissing-prototypes

SOURCES=$(wildcard src/*.c)

#If you put a space in front of %.o, then  [src/humorous.c] becomes [ src/humorous.o]
OBJECTS=$(patsubst src/%.c,objects/%.o,$(SOURCES))

all: main

all-announce: main; $(info $$SOURCES is [$(SOURCES)]) $(info $$OBJECTS is [$(OBJECTS)])

main: $(OBJECTS)
	gcc $(OBJECTS) -o main
	
$(OBJECTS): objects/%.o : src/%.c
	gcc $(CFLAGS) -c  $< -o $@
	
clean:
	rm -rf objects/*.o main

#main: objects/main.o objects/basic.o objects/selection.o objects/humorous.o
#	gcc objects/main.o objects/basic.o objects/selection.o objects/humorous.o -o main

#objects/main.o: main.c humorous.h
#gcc -c -pedantic-errors main.c -o objects/main.o

#objects/basic.o: basic.c
#		gcc -c basic.c -o objects/basic.o
		
#objects/selection.o: selection.c
#		gcc -c selection.c -o objects/selection.o
		
#objects/humorous.o: humorous.c
#		gcc -c humorous.c -o objects/humorous.o
		