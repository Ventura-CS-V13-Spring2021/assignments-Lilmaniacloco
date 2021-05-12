#include "student.hpp"

using namespace std;

int main()

{

    Student s1, s2;
    s1.inputClass();
    cout << "Student A information:"<< endl;
    s1.printAll(); 

    cout << endl;

    s2 = s1; 

    cout << "Student B information after assignment:" << endl;
    s2.printAll(); 

    cout << endl;

    s1.resetClass(); 

    cout << "Student A information after clearing:" << endl;
    s1.printAll(); 

    cout << endl;

    cout << "Student B information: " << endl;
    s2.printAll(); 

}


/* like in assignment 7 I had trouble creating a makefile I don't undersatand why it doesnt work but I had to delete it and re make the makefile. the error it gave me was it coukldnt find the main file. it would say it was named the same as the output.
In line 20-25 in the student.cpp I implemented the destructer by setting all the information back to 0 or empty.
I added *this in line 38 in student.cpp because it would make sure that the the object would be retunred.
*/