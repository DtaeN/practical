NAME=practical
CC=g++
CFLAGS=-c -Wall

all: build

build: main.o task1.o task2.o task3.o task4.o task5.o task6.o
	$(CC) main.o task1.o task2.o task3.o task4.o task5.o task6.o -o $(NAME)

main.o: ../main.cpp
	$(CC) $(CFLAGS) ../main.cpp

task1.o: ../modules/task1.cpp
	$(CC) $(CFLAGS) ../modules/task1.cpp

task2.o: ../modules/task2.cpp
	$(CC) $(CFLAGS) ../modules/task2.cpp

task3.o: ../modules/task3.cpp
	$(CC) $(CFLAGS) ../modules/task3.cpp

task4.o: ../modules/task4.cpp
	$(CC) $(CFLAGS) ../modules/task4.cpp
	
task5.o: ../modules/task5.cpp
	$(CC) $(CFLAGS) ../modules/task5.cpp

task6.o: ../modules/task6.cpp
	$(CC) $(CFLAGS) ../modules/task6.cpp


clean:
	rm -rf *o $(NAME)
