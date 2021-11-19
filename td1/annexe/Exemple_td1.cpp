#include<cstdio>


class Mere {
public:
  virtual void message(){
    printf("je suis la classe Mere\n");
  }
};


class Fille : public Mere {
public:
  void message(){
    printf("je suis la classe Fille\n");
  }
};




int main(){
  Fille *fille= new Fille;

  fille->message();

  Mere *mere=fille;
  mere->message();

  printf("Mere: %ld\n",sizeof(Mere));
  printf("Fille: %ld\n",sizeof(Fille));


  delete mere;
}




/*
int main(){
Mere *mere=NULL;

mere->message();
}
*/
