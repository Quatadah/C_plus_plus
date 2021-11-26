#include "Enseignant.hpp"

namespace enseirb{

    Enseignant::Enseignant(const Chaine &nom):Personne(nom){
        _service = 0;
    }

    int Enseignant::nbHeure(){
        return _service;
    }

    Chaine Enseignant::nom() const{
        Chaine s("Enseignant : ");
        s = s + Personne::nom();
        return s;
    }
}