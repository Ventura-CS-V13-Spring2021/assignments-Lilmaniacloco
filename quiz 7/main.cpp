
#include "rectangle.hpp"
#include "coordinate.hpp"
#include <iostream>
using namespace std;


int main()
{
    Coordinate lbval(0.0, 0.0);
    Coordinate rtval(10.0, 10.0);
    Rectangle r1(lbval, rtval);

    r1.printRectangle();

    cout << endl;
    
    lbval.setXY(-20.0, -20.0);
    rtval.setXY(20.0, 20.0);
    r1.setLBRT(lbval, rtval);
    r1.printRectangle();
}

