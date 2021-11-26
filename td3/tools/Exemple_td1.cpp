#include<cstdio>


class Mere {
public:
  void message(){
    printf("je suis la classe Mere\n");
  }
  virtual ~Mere(){}
};

class Fille : public Mere {
public:
  virtual void message(){
    printf("je suis la classe Fille\n");
  }
};


class PetiteFille : public Fille {
  int *i;
public:
  PetiteFille(){
    i = new int;
  }
  ~PetiteFille(){
    delete i;
  }
  virtual void message(){
    printf("je suis la classe PetiteFille\n");
  }  
};


int main(){
  PetiteFille * pf = new PetiteFille();
  pf->message();

  Fille *fille= pf;

  fille->message();

  Mere *mere=fille;
  mere->message();

  printf("Mere: %ld\n",sizeof(Mere));
  printf("Fille: %ld\n",sizeof(Fille));
  printf("PetiteFille: %ld\n",sizeof(PetiteFille));

  delete mere;
}
