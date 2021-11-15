#pragma once // same as #ifndef #define #endif

class Chaine{
private: // not obligatory
    unsigned int _taille;
    char* _donnees;

public:
    unsigned int taille();
};