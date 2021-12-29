#include "Curseur.hpp"

Curseur::Curseur(Chaine &c, int pos, int debut, int fin){
    _debut = debut;
    _fin = fin;
    _chaine = c;
    _position = pos;
}

char Curseur::operator*(){
    return _chaine[_position];
}

Curseur &Curseur::debut(){
    _position = _debut;
    return *this;
}

Curseur &Curseur::fin(){
    _position = _fin;
    return *this;
}

bool Curseur::fini(){
    return _position == _fin;
}

void Curseur::setPosition(int dec){
    if (_position + dec <= _fin && _position + dec >= _debut)
        _position += dec;
}
Curseur::~Curseur(){}