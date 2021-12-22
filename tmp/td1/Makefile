Prog: Prog.o Chaine.o
	g++ -Wall -o Prog Prog.o Chaine.o


Prog.o: Prog.cpp Chaine.hpp 
	g++ -c Prog.cpp

Chaine.o: Chaine.hpp Chaine.cpp
	g++  -c Chaine.cpp
clean: 
	rm -f *.o Prog