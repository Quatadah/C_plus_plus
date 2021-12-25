#include <iostream>
#include "Chaine.hpp"
#include "Personne.hpp"
#include "Etudiant.hpp"
#include "Enseignant.hpp"

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

void afficheNom(Etudiant &e){
  affiche(e.nom());
}

Chaine concat(Chaine &c, Chaine &s){
  Chaine a = c + s;
  return a;
}

int main(){
  /*
  Chaine s("un texte long");
  Chaine p("test");
  
  //Chaine r = annexe(s, p);
  Chaine r(annexe(s, p));

  affiche(r);
  */
  Personne p("Quatadah");
  afficheNom(p);

  Etudiant e("Nasdami", "Info2", "C++");
  afficheNom(e);

  Enseignant en("Julien", 10);
  afficheNom(en);

  Enseignant *E = new Enseignant("David", 23);
  afficheNom(*E);
  delete E;

  Personne *p2 = new Personne("Nasdamix");
  afficheNom(*p2);
  delete p2;

 return 0;
}
