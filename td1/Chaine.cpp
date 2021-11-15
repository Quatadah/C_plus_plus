#include <stdio.h>
#include "Chaine.hpp"

Chaine::Chaine(){
    printf("%s(%d): %s\n",__FILE__, __LINE__, __func__);
}

Chaine::~Chaine(){
    printf("%s(%d): %s\n",__FILE__, __LINE__, __func__);
}

unsigned int Chaine::taille(){
    return this->_taille;
}

