# Set compiler
CC=g++

#Compile flags (-c to output object file .o)
CFLAGS=-c -Wall

all: activity_1.bin activity_2.bin activity_3.bin

activity_1.bin: activity_1.o 
	$(CC) activity_1.o  -o activity_1.bin

activity_2.bin: activity_2.o 
	$(CC) activity_2.o  -o activity_2.bin

activity_3.bin: activity_3.o 
	$(CC) activity_3.o  -o activity_3.bin

activity_1.o: activity_1.cpp
	$(CC) $(CFLAGS) activity_1.cpp

activity_2.o: activity_2.cpp
	$(CC) $(CFLAGS) activity_2.cpp

activity_3.o: activity_3.cpp
	$(CC) $(CFLAGS) activity_3.cpp

clean:
	rm *.o activity_1.bin activity_2.bin activity_3.bin