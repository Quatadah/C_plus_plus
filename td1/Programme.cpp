#include <stdio.h>
#include "Chaine.hpp"

int main(int argc, char* argv[]){
    Chaine c; // une instance allouée automatiquement
    //Chaine *pc; // une allocation auto d'un pointeur
    //pc = new Chaine(); // une instance allouée dynamiquement

    printf("c: %d\n", c.taille());
    //printf("pc: %d\n", pc->taille()); // (*pc).taille() donne la même chose
    //delete pc;


    return 0;
}