#include "SmartPointer.hpp"
#include "Chaine.hpp"

#include<cstdio>

void f(int *p){
  printf("%d\n",*p);
}

template<class T>
void delArray(T *t){
  delete[] t;
}

template<class T>
void delSingle(T *t){
  delete t;
}

int main(){
  using enseirb::SmartPointer;
  /*
  SmartPointer<int> p(new int(10));
  SmartPointer<int> q(p);
  SmartPointer<Chaine> c = new Chaine("Quatadah");

  printf("La chaine est %s, de taille %d\n", (const char *)(*c), c->taille());
  f(p);
  *p=5;
  f(q);
  */
 SmartPointer<int, delArray> buggy(new int[10]);
}
