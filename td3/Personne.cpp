#include "Personne.hpp"


namespace enseirb{
    Personne::Personne(const Chaine &c){
        this->_nom = c;
    }

    Chaine Personne::nom() const{
        return this->_nom;
    }

    Personne::~Personne(){}
}