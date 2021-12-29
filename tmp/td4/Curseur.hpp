#pragma once
#include "Chaine.hpp"

class Curseur{
    Chaine _chaine;
    int _position;
    int _debut;
    int _fin;
public:
    Curseur(Chaine &, int pos, int debut, int fin);
    Curseur &debut();
    Curseur &fin();
    bool fini();
    char operator*();
    virtual Curseur& operator++() = 0;
    virtual Curseur& operator--() = 0;
    virtual ~Curseur();

protected:
    void setPosition(int dec);
};