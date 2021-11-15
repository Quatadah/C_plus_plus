#pragma once // same as #ifndef #define #endif

class Chaine{
private: // not obligatory
    unsigned int _taille;
    char* _donnees;

public:
    Chaine();
    explicit Chaine(const char*);
    ~Chaine();
    unsigned int taille() const;
    char get(unsigned int);
};