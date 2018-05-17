FLAGS=-Wall -g -c

all: SAP1ADA

SAP1ADA: main.o ADA.o
		 g++ ADA.o main.o -o SAP1ADA.exe

ADA.o: 	ADA.cpp
		g++ $(FLAGS) ADA.cpp ADA.h

main.o: main.cpp
		g++ $(FLAGS) main.cpp

clean:
		del *.o && del *.h. && del *.exe