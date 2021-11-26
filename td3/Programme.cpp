#include <iostream>

#include "Chaine.hpp"
#include "Personne.hpp"
#include "Etudiant.hpp"
#include "Enseignant.hpp"

//using enseirb::Chaine;
//using enseirb::Personne;
//using enseirb::Etudiant;

using namespace enseirb;

Chaine annexe(Chaine u, Chaine t) {
  return u + t;
}


void affiche(const Chaine &s){
  std::cout << "AFFICHE <";
  for(unsigned int i = 0; i < s.taille(); i++)
    std::cout << s[i];
  std::cout << ">" << std::endl;
}

void afficheNom(Personne &p){
  affiche(p.nom());
}


int main(){
  Personne r("Quatadah");
  Personne l(r);
  Personne s("bob");
  //afficheNom(r);
  //afficheNom(l);
  //afficheNom(s);
  //s=r;
  
  Personne *e = new Etudiant("Quatadah", "info2", "C++");
  Personne *a = new Enseignant("Bob");
  afficheNom(*e);
  afficheNom(*a);
  delete e;
  delete a;
  return 0;
}
