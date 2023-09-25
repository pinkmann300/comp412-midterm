CC = g++
CFLAGS = -Wall -g

main.exe: main.o List.o Node.o
	$(CC) $(CFLAGS) -o main.exe main.o List.o Node.o

main.o: main.cpp List.h Node.h
	$(CC) $(CFLAGS) -c main.cpp

Node.o: Node.cpp Node.h
	$(CC) $(CFLAGS) -c Node.cpp

List.o: List.cpp List.h Node.h
	$(CC) $(CFLAGS) -c List.cpp

	