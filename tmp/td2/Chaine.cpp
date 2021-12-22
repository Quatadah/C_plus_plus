#include<cstdio>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "Chaine.hpp"

Chaine::Chaine():_taille(0) {
  _donnees=NULL;
}

Chaine::Chaine(const Chaine &c){
  std::printf("recopy: %s(%d): %s\n", __FILE__, __LINE__, __func__);
  _taille = c._taille;
  if (_taille > 0){
    _donnees = new char[_taille + 1];
    stpcpy(_donnees, c._donnees);
  }else{
    _donnees = NULL;
  }
}
Chaine::Chaine(const char *s) {
  // Cas s==NULL a gerer plus tard.
  _taille = std::strlen(s);

  _donnees = new char[_taille + 1];
  std::strcpy(_donnees, s);
  
  std::printf("%s(%d): %s\n", __FILE__, __LINE__, __func__);
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
  printf("donnees = %s\n", _donnees);
}


const Chaine& Chaine::operator=(const Chaine& c){
  if (_donnees != NULL) delete [] _donnees;
  _taille = c._taille;
  if (_taille > 0){
    _donnees = new char[c._taille + 1];
    strcpy(_donnees, c._donnees);
  }else{
    _donnees = NULL;
  }
  return *this;
}

//setter []
char& Chaine::operator[](unsigned int i){
  if (i < 0 || i > _taille){
    throw "Indice qui déborde\n";
  }
  else{
    return _donnees[i];
  }
}
//getter []
char Chaine::operator[](unsigned int i) const{
  return get(i);
}

Chaine::operator const char *() const{
  return _donnees;
}

Chaine::operator int() const{
  if (_donnees == NULL) return 0; 
  return atoi(_donnees);
}

Chaine Chaine::operator+(const Chaine&c) const{
  Chaine cresult;
  if (_taille == 0 || c.taille() == 0){
    cresult._taille = 0;
    cresult._donnees = NULL;
  }else{
    cresult._taille = _taille + c._taille;
    cresult._donnees = new char[_taille + c._taille + 1];
    strcat(cresult._donnees, _donnees);
    strcat(cresult._donnees, c._donnees);
  }
  return cresult;
}