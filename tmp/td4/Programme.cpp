#include<cstdio>
#include <iostream>

#include "Chaine.hpp"
#include "Curseur.hpp"
#include "CurseurClassique.hpp"
#include "CurseurInverse.hpp"
#include <unistd.h>

void affiche(const Chaine &s){
  std::puts("affiche:");
  for(unsigned int i = 0; i < s.taille(); i++)
    std::putchar(s[i]);
  std::puts("");
}

void afficheCurseur(Curseur &curseur){
  while(!curseur.fini()){
    sleep(0.5);
    std::cout << *curseur ;
    --curseur;
  }
  std::cout << std::endl;
}

int main(int argc, char **argv){
  Chaine name("Quatadah");
  CurseurClassique *c = new CurseurClassique(name, 0);
  //afficheCurseur(*c);
  delete c;

  CurseurInverse ci(name, name.taille() - 1);
  afficheCurseur(ci);


  /*
  Chaine s("un texte long");
  Chaine p("test");
  Chaine copie=p;
  affiche(s);
  affiche(p);
  affiche(copie);
  p=s;
  affiche(s);
  affiche(p);
  affiche(copie);
  */
}
