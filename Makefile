FLAGS=-Wall -g -c

all: SAP1ADA

SAP1ADA: main.o
		 g++ -std=c++11 main.o -o SAP1ADA.exe

main.o: main.cpp
		g++ $(FLAGS) main.cpp

clean:
		del *.o && del *.h.gch && del *.exe