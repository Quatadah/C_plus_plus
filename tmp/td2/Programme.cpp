#include <stdio.h>

#include "Chaine.hpp"

void annexe(const Chaine &s) {
  printf("taille = %d\n", s.taille());
  for (int i = 0; i < (int) s.taille(); i++){
    printf("%c\n", s[i]);
  }
}

void swap(int &i, int &j){
  int k = i;
  i = j;
  j = k;
}
int &element(int *t, int i){
  return t[i];
}

void change(int &j){
  j = 11;
}

Chaine print(const Chaine &s){
  s.debug();
  return s;
}

int main() {
  Chaine s("hello ");
  Chaine s2("world");
  Chaine s3 = s + s2;
  annexe(s3);
  return 0;
}
