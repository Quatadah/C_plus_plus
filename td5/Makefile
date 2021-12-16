
SmartExample: SmartExample.o Chaine.o
	g++ -Wall -o SmartExample SmartExample.o Chaine.o


SmartExample.o: SmartExample.cpp SmartPointer.hpp 
	g++ -c SmartExample.cpp

Chaine.o: Chaine.hpp Chaine.cpp
	g++  -c Chaine.cpp
clean: 
	rm -f SmartExample.o Chaine.o SmartExample