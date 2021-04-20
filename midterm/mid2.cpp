#include	<iostream>
#include	<fstream>
#include	<ctime>
#include	<cstdlib>
using namespace std;
int getRdnum(void);
int isGreater(int);

int main ()
{
    int rdnum;
    ofstream ofs;

    ofs.open("NUMBERS.txt");
    if (ofs.fail())
    {
        cerr << "File Open Error\n";
        exit(0);
    }
    
    
    {
        int getRdnum ();
            //if ( isGreater (rdnum))
            //{
              //  ofs << rdnum 
            //}

            
    }

}

int getRdnum (int rdnum)
{
    const N = 10;
    int rdnum;
    for (int i = 0; i < N ; i++)
     srand(time(0));
    rdnum = rand() % 50 + 1;

    return rdnum;
} 