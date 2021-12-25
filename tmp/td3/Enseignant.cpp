#include "Enseignant.hpp"

using namespace::enseirb;

Enseignant::Enseignant(const Chaine &nom, const int service):Personne(nom){
    Chaine s("Enseignant : ");
    _nom3 = s + nom;
    _service = service;
}

int Enseignant::nbHeure() const{
    return _service;
}

Chaine Enseignant::nom() const{
    return _nom3;
}