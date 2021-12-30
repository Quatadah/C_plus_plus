#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;
void show_text(char *s){
  if (s == NULL){
    throw "Argument invalide";
  }else{
    cout << s << endl;
  }
}
int main(int argc, char *argv[]){
  try{
    show_text(NULL);
  }catch(const char *){
    cout << "Impossible" <<endl;
  }
  return 0;
}
