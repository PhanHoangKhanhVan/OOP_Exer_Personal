#include <iostream>
using namespace std;

int sum(int lower, int upper = 10, int inc = 1){
    int sum = 0;
    for(int k = lower; k <= upper; k+= inc)
        sum += k;
    return sum;
}

main(){
    cout<<"Sum = " << sum(1);
}