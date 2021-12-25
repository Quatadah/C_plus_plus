#include "Personne.hpp"

using namespace enseirb;

Personne::Personne(const Chaine &c):_nom(c){};

Chaine Personne::nom() const{
    return _nom;
}

Personne::~Personne(){} 