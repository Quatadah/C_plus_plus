#include "Etudiant.hpp"
#include <string.h>

using namespace enseirb;

Etudiant::Etudiant(const Chaine &nom, const Chaine &filiere, const Chaine &enseignement):Personne(nom){
    Chaine nom2("Eleve : ");
    _nom2 = nom2 + nom;
    _filiere = filiere;
    _enseignement = enseignement;
}

const Chaine &Etudiant::filiere() const{
    return _filiere;
}

const Chaine &Etudiant::enseignement() const{
    return _enseignement;
}

void Etudiant::setEnseignement(Chaine &c) {
    _enseignement = c;
}

Chaine Etudiant::nom() const{
    return _nom2;
}