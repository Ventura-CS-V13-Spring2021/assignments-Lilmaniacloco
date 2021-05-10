#include <iostream>
using namespace std;

Coordinate::Coordinate(double xval,double yval){
  setXY(xval, yval);
}

Coordinate::setXY(double xval, double yval) {
  x = xval;
  y = yval;
}

int Coordinate::getX()const{
  return x;
}

int Coordinate::getY()const{
  return y;
}

void Coordinate::printXY()const{
  cout<<" X coordinate is :" << x << "Y coordinate is : " << y << endl;
}