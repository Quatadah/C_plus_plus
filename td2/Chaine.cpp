#include<cstdio>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Chaine.hpp"

Chaine::Chaine():_taille(0) {
  _donnees=NULL;
}

Chaine::Chaine(const char *s) {
  // Cas s==NULL a gerer plus tard.
  _taille = std::strlen(s);

  _donnees = new char[_taille + 1];
  std::strcpy(_donnees, s);
  
  std::printf("%s(%d): %s\n", __FILE__, __LINE__, __func__);
}

Chaine::Chaine(const Chaine &c){
  _taille = c._taille;
  if ( _taille > 0 ){
    _donnees = new char[_taille + 1];
    strcpy(_donnees, c._donnees);
  } else _donnees = NULL;
}

Chaine::~Chaine() {
  if (_donnees != NULL)
    delete[] _donnees;
  _donnees=NULL;
  std::printf("%s(%d): %s\n", __FILE__, __LINE__, __func__);
}

unsigned int Chaine::taille() const{
    return _taille;
}

char Chaine::get(unsigned int i) const{
  if (_donnees==NULL) return '\0';
  if (i>_taille) return '\0';
  return _donnees[i];
}

void Chaine::debug() const{
  printf("debug :%p %p %s\n",this, this->_donnees, this->_donnees);
}


const Chaine& Chaine::operator=(const Chaine& c){
  if (_donnees != NULL) delete [] _donnees;
  _taille = c._taille;
  if (_taille > 0){
    _donnees = new char[_taille + 1];
    strcpy(_donnees, c._donnees);
  } else _donnees = NULL;

  return *this;
}

char Chaine::operator[](int i) const{
  return get(i);
}

char &Chaine::operator[](int i){
  if (i < 0 || i > (int) _taille){
    throw "l'indice donné ne correspond pas";
  }
  return _donnees[i];
}

Chaine::operator int() const{
  if (_donnees == NULL) return 0;
  return atoi(_donnees);
}

Chaine::operator const char *() const{
  return _donnees;
}

Chaine Chaine::operator+(const Chaine&c) const{
  //Concaténer les deux chaine this et c;
}