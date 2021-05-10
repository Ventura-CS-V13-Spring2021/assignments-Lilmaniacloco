#include "address.hpp"
#include <iostream>
using namespace std;


Address::Address()
{
  street = "";
  state = "";
  zip = 0;
}

Address::Address(string str , string st , int z)
{
  street = str;
  state = st;
  zip = z;
}

string Address::getStreet()const
{
  return street;
}

string Address::getState()const
{
  return state;
}

int Address::getZip()const
{
  return zip;
}

void Address::printAddress()const
{
  cout<<"Street "<<street<<", state "<<state<<", Zip code "<<zip;
}

void Address::setStreet(string addr)
{
  street = addr;
}

void Address::setState(string st)
{
  state = st;
}

void Address::setZip(int z)
{
  zip = z;
}
void Address::setAddress(string addr,string st,int z)
{
  street = addr;
  state = st;
  zip = z;
}