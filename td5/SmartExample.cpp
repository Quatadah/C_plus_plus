#include"SmartPointer.hpp"
#include "Chaine.hpp"

#include<cstdio>

void f(int *p){
  printf("%d\n", *p);
}

void f(Chaine *s){
  printf("%s\n",(char const *)(*s));
}

void delInt(int *p){ delete p;}
void delIntArray(int *p){ delete[] p;}


int main(){
  using enseirb::SmartPointer;
  using enseirb::delSingle;
  using enseirb::delArray;
  SmartPointer<int> p(new int(10));
  SmartPointer<int, delSingle> q(p);
  
  //SmartPointer<char, delIntArray> s(new char(2 ));
  //SmartPointer<SmartPointer<char>> t(NULL);

  //SmartPointer<Chaine, delIntArray> t(new Chaine("Hello"));
  SmartPointer<int ,delArray<int>>   s (new int[10]);
  f(p);
  //f(t);
  
  *p=5;
  f(p); 
}
 