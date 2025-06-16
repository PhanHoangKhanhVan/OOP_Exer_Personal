#include <iostream>
using namespace std;
class Point {
	protected:
		int x, y;
	public:
		Point()
		{
			x=0;
			y=0;
		}
};
class Point3D: public Point {
	protected:
		int z;
	public:
		Point3D()
		{
			z=0;
		}
};
main() {
    Point3D *cp = new Point3D;   // cp trỏ đến 1 Point3D
    Point3D *cp1;                // cp1 là con trỏ chưa gán
    Point *p;
    
    p = cp;                      // upcasting: gán con trỏ Point3D cho con trỏ Point, an toan
    cp1 = (Point3D*) p;          // downcasting: ép kiểu ngược lại từ Point* về Point3D*, nguy hiem, chi chac chan p tro toi Point3D
}
