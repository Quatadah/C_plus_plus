
SmartExample: SmartExample.o
	g++ -Wall -o SmartExample SmartExample.o  Chaine.o


SmartExample.o: SmartExample.cpp SmartPointer.hpp Chaine.o
	g++ -c SmartExample.cpp

Chaine.o: Chaine.cpp Chaine.hpp
	g++ -c Chaine.cpp
clean: 
	rm -f SmartPointer.o SmartExample.o SmartExample Chaine.o