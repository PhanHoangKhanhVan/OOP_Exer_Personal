#include <iostream>
#include <math.h>

using namespace std;

//Class to represent points
class Point{
private:
    int x, y; //coordinates

public:
    Point(int xVal = 0, int yVal = 0){
        x = xVal;
        y = yVal;
    }

    void setX(int xVal) { x = xVal;}
    void setY(int yVal) { y = yVal; }

    int getX(){return x;}
    int getY(){ return y;}

};

int main(){
    Point p, p2;
    p.setX(300);
    p.setY(400);
    cout <<"x=" << p.getX() << endl;
    cout <<"y=" << p.getY() << endl;
    p2 = p;
}