#include "Etudiant.hpp"

namespace enseirb{

Etudiant::Etudiant(const Chaine &nom, const Chaine &enseignement, const Chaine &filiere):Personne(nom){
    _nom2 = "Eleve : ";
    _nom2 = _nom2 + nom;
    _filiere = filiere;
    _enseignement = enseignement;
}

const Chaine &Etudiant::filiere() const{
    return _filiere;
}

const Chaine &Etudiant::enseignement() const{
    return _enseignement;
}

void Etudiant::setEnseignement(const Chaine &c){
    _enseignement = c;
}

Chaine Etudiant::nom() const{
    return _nom2;
}

}