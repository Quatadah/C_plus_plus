CXX=g++
CXXFLAGS=-Wall -g 

Programme: Programme.o Chaine.o Curseur.o CurseurClassique.o CurseurInverse.o
	$(CXX) $(CXXFLAGS) $^ -o $@

Programme.o: Programme.cpp Chaine.hpp Curseur.hpp CurseurClassique.hpp CurseurInverse.hpp

Chaine.o: Chaine.cpp Chaine.hpp 

Curseur.o: Chaine.hpp Curseur.hpp

CurseurClassique.o:Chaine.hpp Curseur.hpp CurseurClassique.hpp

CurseurInverse.o: Chaine.hpp Curseur.hpp CurseurInverse.hpp

clean:
	rm Programme *.o