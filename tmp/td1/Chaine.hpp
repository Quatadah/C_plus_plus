#pragma once
#include <stdio.h>

class Chaine{
    unsigned int _taille;
    char* _donnees;

public:
    Chaine();
    Chaine(const char*);
    unsigned int taille() const;
    char get(unsigned int i);
    ~Chaine();
};