#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string studentname;
    int total_stud;
    int score1, score2;
    ofstream ofs;

    ofs.open("student.txt");
    if (ofs.fail())
    {
        cerr << "File Op[en Error\n";
        exit(0);
    }
    cout << "Enter the number of students : ";
    cin >> total_stud;
    ofs << total_stud << endl;
    for (int i = 0; i < total_stud; i++)
    {
        cout << "Enter the student name : ";
        cin >> studentname;
        cout << "Enter the student top two scores: ";
        cin >> score1 >> score2;
       
        ofs << studentname<< " \n" << score1 << " " << score2 << endl;
    }
    ofs.close();
}