#include <stdio.h>

#include "Chaine.hpp"

void annexe(const Chaine &s) {
  printf("La taille de s est : %d\n", s.taille());
}

void print(const Chaine &s){
  s.debug();
  for (unsigned int i = 0; i < s.taille(); i++){
    printf("%d:%c ",i , s[i]);
  }
  printf("\n");
}

int main() {
  /* exo 1 
  Chaine chaine("Une petite");
  annexe(chaine);
  */

  /* exo 3
 Chaine s1 = Chaine("Une chaine");
 Chaine s2(s1);
 Chaine s3(s1); // on peut pas faire s3 = s1 (car constructeur explicit et cette expression est utilisable lorsque le constructeur est implicite)
 
 

 s1.debug();
 s2.debug();
 s3.debug();
 */
 // s1 s2 et s3 pointent tous les 3 vers la même zone mémoire de _donnees

  /* exo 5
  Chaine s("message");
  print(s);
  */

 /* exo 6
  Chaine s1("Une chaine");
  Chaine s2("Coucou");
  Chaine s3("Hello");

  s1 = s2 = s3; // s1.operator=(s2.operator=(s3))
  s1.debug();
  s2.debug();
  s3.debug();

  */

 /* operator[]
  Chaine s("Une chaine");
  //printf("%c", s[0]);
  s[0] = 'A';
  print(s);

  */

 Chaine s("102");
 printf(" converted to const char * : %s \n", (const char*)s);
 printf(" converted to int : %d \n", (int)s);

 puts(s); // cast fait automatiquement


} // liberation de l'instance
