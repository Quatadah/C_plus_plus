#pragma once
#include "Chaine.hpp"


namespace enseirb {

    class Personne {
    private:
        Chaine _nom;
    public:
        Personne(const Chaine &c);
        virtual Chaine nom() const;
        virtual ~Personne();
    };
}