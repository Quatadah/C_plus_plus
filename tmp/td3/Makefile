CC=g++
CPPFLAGS=-Wall -Wextra -std=c++0x

prog: Chaine.o Programme.o Personne.o Etudiant.o Enseignant.o
	$(CC) $^ -o $@

Programme.o: Chaine.hpp Personne.hpp Etudiant.hpp Enseignant.hpp

Chaine.o: Chaine.hpp

Personne.o: Chaine.hpp Personne.hpp

Etudiant.o: Chaine.hpp Personne.hpp Etudiant.hpp

Enseignant.o: Chaine.hpp Personne.hpp Enseignant.hpp

clean:
	rm -f *.o prog