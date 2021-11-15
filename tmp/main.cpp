#include <iostream>
using namespace std;

void swap(int &a, int &b){
    int k = a;
    a = b;
    b = k;
}

int main(int argc, char* argv[]){
    int a = 3, b = 5;
    swap(a, b);
    cout << "a = " << a << '\n' << "b = " << b << "\n";
    return 0;
}