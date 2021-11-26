#pragma once

#include "Personne.hpp"


namespace enseirb{

class Etudiant : public Personne{
    Chaine _filiere;
    Chaine _enseignement;
    Chaine _nom2;
public: 
    Etudiant(const Chaine &nom, const Chaine &filiere, const Chaine &_enseignement);
    const Chaine &filiere() const;
    const Chaine &enseignement() const;
    void setEnseignement(const Chaine &c);
    virtual Chaine nom() const;
};

}