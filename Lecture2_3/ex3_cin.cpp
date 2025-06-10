#include <iostream>
using namespace std;
int main(){
    int a,b;
    float f;
    char ch;
    cout <<"Enter two integers, one float, and a char";
    cin >> a >> b >> f >> ch;
    cout << "a =" << a << ",b = " << b << ",f=" << f << ", ch=" << ch << endl;
    char name[80];
    int i = 0;
    cout << "Enter your name (with '#' at the end): \n";
    cin.ignore();
    while (1){
        ch = cin.get();
        if (ch == '#') break;
        name [i++] = ch;
    }
    name[i] = '\0';
    cout<< name << endl;
}