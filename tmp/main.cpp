#include <iostream>
using namespace std;

void swap(int &a, int &b){
    int k = a;
    a = b;
    b = k;
}

class Test{
    int i;
public:
    void print(){
        printf("Test\n");
    }
};


int main(){
    Test *t = new Test;
    t->print();    
    delete t;
    return 0;
}