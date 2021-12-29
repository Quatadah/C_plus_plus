#pragma once
#include "Curseur.hpp"
#include "Chaine.hpp"

class CurseurInverse: public Curseur{
public:
    CurseurInverse(Chaine &, int position);
    Curseur &operator++() ;
    Curseur &operator--() ;
};