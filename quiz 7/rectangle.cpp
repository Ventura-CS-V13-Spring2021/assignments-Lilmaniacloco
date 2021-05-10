#include "rectangle.hpp"
#include <iostream>

using namespace std;

Coordinate Rectangle :: getLB()const{
  return lb;
}
Coordinate Rectangle::getRT()const{
  return rt;
}
double Rectangle::getArea(){
  double area = ((rt.getX()-lb.getX()) * (rt.getY()-lb.getY)));
  return area;
}
 void Coordinate Rectangle::getCenter(){
  double first = (lb.getX()+(rt.getX())-rt.getX()))/2;
  double second = (lb.getY()+(rt.getY())-rt.getY()))/2;
}
void Coordinate Rectangle::setLBRT(Coordinate lbval,Coordinate rtval){
  lb = lbval;
  rt = rtval;
}
void Rectangle::printRectangle()const{
  cout<<"Bottom left : "<< lb.printXY()<<endl;
  cout<<"Top Right : "<<rt.printXY()<<endl;
  cout<<"Center coordinate : "<<center.printXY()<<endl;
  cout<<"Area is : "<<getArea();
}