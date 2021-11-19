#ifndef CHAINE_HPP
#define CHAINE_HPP

#include <cstring>

class Chaine {
 private:
  char* _donnees;
  unsigned int _taille;

 public:
  Chaine();
  Chaine(const char*);
  Chaine(const Chaine &c);
  ~Chaine();

  unsigned int taille() const; // const :ne modifie pas l'état
  char get(unsigned int i) const; // const : ne modifie pas l'état
  void debug() const; // const : ne modifie pas l'état
  const Chaine& operator=(const Chaine&);
  char operator[](int i) const; // accéder sans modifier
  char &operator[](int i); // accéder pour modifier

  operator int() const; // cast de Chaine en int
  operator const char *() const; // cast de Chaine en const char * (utile pour la fonction puts)
  Chaine operator+(const Chaine&c) const;
};



#endif
