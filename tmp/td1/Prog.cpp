#include <stdio.h>
#include "Chaine.hpp"

void annexe(Chaine *s){
    for (int i = 0; i < s->taille(); i++){
        putchar(s->get(i));
    }
    putchar('\n');
}

int main(int argc, char* argv[]){
    Chaine c("Bonsoir");
    Chaine *pc; 
    pc = new Chaine("Hello");
    annexe(&c);
    printf("%d\n", c.taille());
    printf("%d\n", pc->taille());

    delete pc;
    return 0;
}