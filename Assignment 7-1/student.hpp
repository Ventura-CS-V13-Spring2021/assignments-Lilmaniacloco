#ifndef STUDENT_H
#define STUDENT_H
#include "DOB.hpp"
#include "address.hpp"

class Student
{
private:
   string sname;
   int id;
   DOB dob;
   Address address;

public:
   Student();
   Student(string stname, int idnum, DOB date, Address addr);
   int getID() const;
   string getSname() const;
   DOB getDOB() const;
   Address getAddress() const;
   void setSname(string name);
   void setID(int num);
   void setDOB(DOB dob);
   void setAddress(Address addr);
   void printStudent();
};

#endif