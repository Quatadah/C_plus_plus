#include <stdio.h>
#include "Chaine.hpp"
#include <string.h>

Chaine::Chaine():_taille(0), _donnees(NULL){
    printf("constructor :: %s(%d): %s\n",__FILE__, __LINE__, __func__);
}

Chaine::Chaine(const char *s){
    printf("constructor :: %s(%d): %s\n",__FILE__, __LINE__, __func__);
    _taille = strlen(s);
    _donnees = new char[_taille + 1];
    strcpy(_donnees, s);
}

Chaine::~Chaine(){
    printf("destructor :: %s(%d): %s\n",__FILE__, __LINE__, __func__);
    if (this->_donnees != NULL) delete[] _donnees; // delete _donnees allocated by the constructor
}

unsigned int Chaine::taille() const{
    return this->_taille;
}

char Chaine::get(unsigned int i){
    return this->_donnees[i];
}

