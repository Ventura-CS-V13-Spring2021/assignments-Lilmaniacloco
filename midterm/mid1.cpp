//write of the program

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




//read of program

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string studentname;
    int total_stud, total_students_abv;
    int score1, score2;
    double sum, avg;
    ifstream ifs;

    ifs.open("student.txt");
    if (ifs.fail())
    {
        cerr << "File Open Error \n";
        exit(0);
    }
    ifs >> total_stud;
    sum = 0;
    for (int i = 0; i < total_stud; i++)
    {
        ifs >> studentname >> score1 >> score2 ;
        cout << " student name : " << studentname << "\t";
        cout << " Score 1 : " << score1 << " Score 2 : " << score2 <<"\t";
        
        sum = score1 + score2;
        cout << "sum: " << sum << endl;

        avg = sum / 2;
        cout << "Avg : " << avg << endl;
        if(avg >= 80)
        {
            total_students_abv++;
        }
    }
    cout << "total number of students who have an average greater than 80 : " << total_students_abv << "students\n";
}   
/* this code was pretty simple no need to debug much. I just couldn't figure
    out how to get the total of student who got above 80 so I moved on to the next question.
    after finishing up the others I cames back and started to brainstorm some ideas and 
    and was dumb founded how simple it was i laughed at myself. I fiugre to keep a tally 
    on each student that got an 80 or above avg. each time the if stament was true it would a 1 to the tally
*/