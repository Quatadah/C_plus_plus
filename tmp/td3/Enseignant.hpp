#pragma once

#include "Personne.hpp"

namespace enseirb{
    class Enseignant: public Personne{
        int _service;      
        Chaine _nom3;
    public:
        Enseignant(const Chaine &nom,const int service);
        int nbHeure() const;
        Chaine nom() const;
        
    };
}