#include "student.hpp"
#include <iostream>
using namespace std;

Student::Student()
{
  sname = "";
  id = 0;  
}

Student::Student(string stname, int idnum, DOB date, Address addr)
{
  sname = stname;
  id = idnum;
  dob = date;
  address = addr;
}

int Student::getID()const
{
  return id;
}

string Student::getSname()const
{
  return sname;
}

DOB Student::getDOB()const
{
  return dob;
}

Address Student::getAddress()const
{
  return address;
}

void Student::setSname(string name)
{
  sname = name;
}

void Student::setAddress(Address addr)
{
  address = addr;
}

void Student::setDOB(DOB dob)
{
  dob = dob;
}

void Student::setID(int num)
{
  id = id;
}

void Student::printStudent()
{
  cout<<"Id: "<<id;
  cout<<"\tName: "<<sname;
  cout<<"\tAddress: ";
  address.printAddress();
  cout<<"\tDOB: ";
  dob.printDate();
  cout<<"\n\n";
}