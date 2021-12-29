#include "CurseurInverse.hpp"
#include <iostream>

CurseurInverse::CurseurInverse(Chaine &c, int pos):Curseur(c, pos, 0, c.taille()){}

Curseur& CurseurInverse::operator++(){
    std::cout << "Hello everyone" << std::endl;
    setPosition(1);
    return *this;
}

Curseur& CurseurInverse::operator--(){
    setPosition(-1);
    return *this;
}
