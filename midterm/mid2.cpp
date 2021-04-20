#include	<iostream>
#include	<fstream>
#include	<ctime>
#include	<cstdlib>
using namespace std;
int getRdnum(void);
int isGreater(int, int);

int main ()
{
    int N;
    int rdnum, prec;
    ofstream ofs;

    ofs.open("NUMBERS.txt");
    if (ofs.fail())
    {
        cerr << "File Open Error\n";
        exit(0);
    }
        srand(time(0));
        for (int i = 0; i < 10; i++)
        {
            N = getRdnum ();
           
            if (isGreater (N, i))
            {
                cout << "This number " << N << " is greater than peceding  number " << endl;
            }
            cout << N << endl;
        } 

}

int getRdnum ()
{ 
    int random;
    random = rand() % 50 + 1;
    return random;
} 

int isGreater (int n, int i)
{
     static int prec;
      while (i == 0)
        {   
            i++;
            prec = n;
            continue;
            
        }
        
        if (prec < n)
        {
            return 1;

        }
        prec = n;

    return 0;

}