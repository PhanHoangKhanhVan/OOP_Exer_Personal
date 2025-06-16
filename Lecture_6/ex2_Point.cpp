#include <iostream>
#include <math.h>

using namespace std;

//Class to represent points

class Point{
private:
    int x;

public:
    int y;
    Point(){
        cout << "Default constructor" << endl;
    }
    /*
    Point(intxVal = 0, int yVal = 0){
        x = xVal;
        y = yVal;
        }*/
    void setX(int xVal){ x = xVal;}
    void setY(int yVal) { y = yVal; }

    int getX(){return x;}
    int getY(){ return y; }
};

int main(){
    //Point figures[5];
    Point p;
    p.setX(300);
    p.setY(500);
    cout << "x = " << p.getX() << endl;
    cout << "y=" << p.y << endl;
}