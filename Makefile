CFLAGS = -Wall -g -D_GNU_SOURCE

LDFLAGS= -fPIC -shared 

TARGET=MyMath

CC=g++

#.SUFFIX=

#.PREFFIX=

SRC=main.cpp MyMath.cpp MyMath.h main.cpp

.PHONY:all

all:mymath

mymath:MyMath.o main.o
	$(CC)  $(CFLAGS) -o mymath main.o MyMath.o -L$(shell pwd) -lMyMath
main.o:main.cpp
	$(CC) -c $(CFLAGS) $(LDFLAGS) -o main.o  main.cpp
MyMath.o:MyMath.cpp MyMath.h
	$(CC) -c $(CFLAGS) $(LDFLAGS)  -o MyMath.o MyMath.cpp 

lib$(TARGET).so:MyMath.o
	$(CC) $(CFLAGS) $(LDFLAGS) -o lib$(TARGET).so MyMath.o

.PHONY: clean
clean:
	rm -f *.o $(TARGET) *.so mymath
