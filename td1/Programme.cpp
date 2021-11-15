#include <stdio.h>
#include "Chaine.hpp"

void annexe(Chaine *c){
    for (int i = 0 ; i < c->taille(); i++){
        putchar(c->get(i));
    }
    putchar('\n');
}

int main(int argc, char* argv[]){
    Chaine c("hello world!"); // une instance allouée automatiquement
    //Chaine *pc; // une allocation auto d'un pointeur
    //pc = new Chaine(); // une instance allouée dynamiquement

    printf("_taille: %d\n", c.taille());
    printf("_donnees[%d]: %c\n", 3, c.get(3));
    //printf("pc: %d\n", pc->taille()); // (*pc).taille() donne la même chose
    
    annexe(&c);
    //annexe(*pc);
    //delete pc;


    /*
    
    */
    return 0;
}