#include	<iostream>
#include	<fstream>
#include	<ctime>
#include	<cstdlib>
using namespace std;
void getRdnum(int);
int isGreater(int);

int main ()
{
    int N = 10;
    int rdnum, prec;
    ofstream ofs;

    ofs.open("NUMBERS.txt");
    if (ofs.fail())
    {
        cerr << "File Open Error\n";
        exit(0);
    }

    { 
        srand(time(0));
        for (int i = 0; i < N; i++)
            getRdnum (rdnum);
            if (isGreater (rdnum))
            {
                cout << "This number " << rdnum << " is greater than peceding " << prec << endl;
            }
            
            
    }

}

void getRdnum ( int random)
{
    random= rand() % 50 + 1;
    cout << random << endl;

} 

int isGreater (int rdnum)
{
    int prec;

    prec = rdnum;
          
    if (prec < rdnum)
        {
            cout << "This number " << rdnum << " is greater than peceding " << prec << endl;
            return 1;
        }
        prec = rdnum;


    return 0;
}