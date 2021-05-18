#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>
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
        Student(const Student& rhs); //copy const
        ~Student();
        Student& operator=(const Student& rhs);
        void inputClass();
        void resetClass();
        void printAll() const;
        string getName() const;
        int getNumclasses() const;

};

Student::~Student()
{
    numClasses = 0;
    resetClass();
    name = " ";
}

Student& Student::operator=(const Student& rhs)
{
    resetClass();

    numClasses = rhs.numClasses;    
    if(numClasses > 0)
    {
        classList = new string[numClasses];
        for(int i = 0; i < numClasses; i++)
        classList[i] = rhs.classList[i];    
    }
    return *this; //this will return the object in this function
}

void Student::inputClass()
{
    cout << "Name: ";
    cin >> name;
    cout << "Number of Classes: ";
    cin >> numClasses;
    cin.ignore(2,'\n');

    if(numClasses > 0)
    {
        classList = new string [numClasses];
        for (int i = 0; i < numClasses; i++)
        {
            cout << "Course " << (i+1) << " : ";
            getline(cin, classList[i]);
        }
    }
    cout << endl;
}

void Student::resetClass()
{
    if(classList)
    {
        delete [] classList;
        classList = NULL;
        numClasses = 0;
    }

}

void Student::printAll() const
{
    cout << "Name of the student: " << name << endl;
    cout << "Class List:" << endl;
    for(int i = 0; i < numClasses; i++)
    {
        cout << "class " << i+1 << ": "<< setw(2) << right << classList[i] << endl;
    }
}

string Student::getName() const
{
    return name;
}

int Student::getNumclasses() const
{
    return numClasses;
}


int main()

{

    Student s1, s2;
    s1.inputClass();
    cout << "Student A information:"<< endl;
    s1.printAll(); 

    cout << endl;

    s2 = s1; 

    cout << "Student B information after assignment:" << endl;
    s2.printAll(); //B same as A

    cout << endl;

    s1.resetClass(); //clear the classes

    cout << "Student A information after clearing:" << endl;
    s1.printAll(); //no classes

    cout << endl;

    cout << "Student B information: " << endl;
    s2.printAll(); //same as A before clearing

}