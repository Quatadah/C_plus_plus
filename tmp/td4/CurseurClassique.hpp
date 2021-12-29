#pragma once
#include "Curseur.hpp"

class CurseurClassique: public Curseur{
public:
    CurseurClassique(Chaine &, int position);
    Curseur& operator++() ;
    Curseur& operator--() ;
};

