CC=g++
CFLAGS=-I.
DEPS = intArrayq6.hpp

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

buildall: q6.o q6functions.o 
	$(CC) -o q6 q6.o q6functions.o 
clean:
	bin/rm -rf *.o a.out
  