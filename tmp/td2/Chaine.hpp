#ifndef CHAINE_HPP
#define CHAINE_HPP

#include <cstring>

class Chaine {
 private:
  char* _donnees;
  unsigned int _taille;

 public:
  Chaine();
  Chaine(const Chaine &c);
  Chaine(const char*);
  ~Chaine();
  void debug() const;
  const Chaine& operator=(const Chaine&);
  char& operator[](unsigned int i);
  char operator[](unsigned int i) const;
  unsigned int taille() const;
  char get(unsigned int i) const;
  operator const char *() const;
  operator int() const;
  Chaine operator+(const Chaine&c) const;

};

#endif
