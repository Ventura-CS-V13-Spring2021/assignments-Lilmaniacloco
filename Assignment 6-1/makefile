CC=g++
CFLAGS=-I.
DEPS = intA.hpp

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

buildall: 6-1.o intArray.o 
	$(CC) -o 6-1 6-1.o intArray.o 
clean:
	bin/rm -rf *.o a.out 

