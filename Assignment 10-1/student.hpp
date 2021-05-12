#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

class Student
{
    private: 
        string name;
        int numClasses;
        string *classList;

    public: 
        Student() : name(), numClasses(0), classList(NULL) {};
        Student(string n, int num);
        Student(const Student& rhs); 
        ~Student();
        Student& operator=(const Student& rhs);
        void inputClass();
        void resetClass();
        void printAll() const;
        string getName() const;
        int getNumclasses() const;

};
#endif