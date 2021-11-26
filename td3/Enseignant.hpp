#pragma once

#include "Personne.hpp"

namespace enseirb{

class Enseignant : public Personne{
    int _service;
public: 
    Enseignant(const Chaine &nom);
    virtual int nbHeure();
    virtual Chaine nom() const;
};

}