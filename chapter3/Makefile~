
## Created by Anjuta

CC = gcc
CFLAGS = -g -Wall
OBJECTS = posixrestrict.o
INCFLAGS = -g
LDFLAGS = -Wl,-rpath,/usr/local/lib
LIBS = -L../lib -lapue

all: unixproject

unixproject: $(OBJECTS)
	$(CC) -o posixrestrict $(OBJECTS) $(LDFLAGS) $(LIBS)

.SUFFIXES:
.SUFFIXES:	.c .cc .C .cpp .o

.c.o :
	$(CC) -o $@ -c $(CFLAGS) $< $(INCFLAGS)

count:
	wc *.c *.cc *.C *.cpp *.h *.hpp

clean:
	rm -f *.o

.PHONY: all
.PHONY: count
.PHONY: clean
