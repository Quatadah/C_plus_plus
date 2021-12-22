#include <stdio.h>
#include "Chaine.hpp"
#include <string.h>

char Chaine::get(unsigned int i){
    return _donnees[i];
}

Chaine::Chaine(const char *s){
    printf("constructor %s(%d): %s\n", __FILE__, __LINE__, __func__);
    _taille = strlen(s);
    _donnees = new char[_taille + 1];
    strcpy(_donnees, s);
}

Chaine::Chaine():_taille(0), _donnees(NULL){
    printf("constructor %s(%d): %s\n", __FILE__, __LINE__, __func__);
}

Chaine::~Chaine(){
    printf("destructor %s(%d): %s\n", __FILE__, __LINE__, __func__);
    if (_donnees != NULL){
        delete[] _donnees;
    }
}
unsigned int Chaine::taille() const{
    return _taille;
};
