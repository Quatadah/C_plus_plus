#pragma once
#include "Personne.hpp"

namespace enseirb {
    class Etudiant : public Personne{
        Chaine _nom2;
        Chaine _filiere;
        Chaine _enseignement;
    public:
        Etudiant(const Chaine &nom, const Chaine &filiere, const Chaine &enseignement);
        const Chaine &filiere() const;
        const Chaine &enseignement() const;
        void setEnseignement(Chaine &c);
        Chaine nom() const;
    };
}