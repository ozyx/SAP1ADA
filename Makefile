FLAGS=-Wall -g -c

all: SAP1ADA

SAP1ADA: main.o ADA.o
		 g++ -std=c++11 ADA.o main.o -o SAP1ADA.exe

ADA.o: 	ADA.cpp
		g++ $(FLAGS) ADA.cpp ADA.h

main.o: main.cpp
		g++ $(FLAGS) main.cpp

clean:
		del *.o && del *.h.gch && del *.exe