CC=g++
CPPFLAGS=-Wall -Wextra -std=c++0x

prog: Enseignant.o Personne.o Chaine.o Programme.o Etudiant.o
	$(CC) $^ -o $@

Programme.o: Chaine.hpp Personne.hpp Etudiant.hpp Enseignant.hpp

Chaine.o: Chaine.hpp

Personne.o: Chaine.hpp Personne.hpp

Etudiant.o: Personne.hpp Etudiant.hpp

Enseignant.o: Personne.hpp Enseignant.hpp

clean:
	rm -f *.o prog