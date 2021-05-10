#include "student.hpp"
#include "DOB.hpp"
#include "address.hpp"

int main()
{
   DOB student_dob(12, 24, 2000);
   Address student_address("4667 Telegraph Road", "CA", 93003);

   Student s1("Johns", 9001001, student_dob, student_address);
   s1.printStudent();
   DOB newdob = s1.getDOB();
   newdob.setYear(2020);
   s1.setDOB(newdob);
   s1.printStudent();

   student_dob.setDOB(1, 1, 2020);
   student_address.setAddress("1000 Grand ave", "CA", 90001);
   s1.setDOB(student_dob);
   s1.setAddress(student_address);
   s1.printStudent();
}