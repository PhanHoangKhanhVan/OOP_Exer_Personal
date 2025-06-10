#include <iostream>
using namespace std;

void incrementByRef(int &);

int main(){
    cout << "z=" << z << "before";
    incrementByRef(z);
    cout << "z=" <<  z << "after";
}

void incrementByRef(int &a){
    a +=10;
}