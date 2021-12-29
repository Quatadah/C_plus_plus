#include "CurseurClassique.hpp"

CurseurClassique::CurseurClassique(Chaine &c, int pos):Curseur(c, pos, 0, c.taille()){}

Curseur& CurseurClassique::operator++() {
    setPosition(1);
    return *this;
}

Curseur& CurseurClassique::operator--() {
    setPosition(-1);
    return *this;
}

