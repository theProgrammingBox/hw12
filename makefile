CC = g++
FLAGS = -std=c++14 -Wall -g
OBJS = hw12.o
FILES = hw12.cpp TQueue.h

all: hw12

hw12: $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o hw12

hw12.o: hw12.cpp TQueue.h
	$(CC) $(FLAGS) -c hw12.cpp

tar:
	tar -cf hw12.tar hw12.scr Makefile $(FILES)

clean:
	rm *.o *.tar *.scr hw12

sudoClean:
	rm *.o *.scr hw12