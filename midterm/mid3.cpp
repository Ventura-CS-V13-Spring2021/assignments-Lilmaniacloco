#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdlib>
using namespace std;
int getRdnum (void);
int getMinandMax (int , int, int);
int differance(int , int);



int main()
{
    int num1, num2, num3, Max, Min;

     srand(time(0));
      
    num1 = getRdnum();

    num2 = getRdnum();

    num3 = getRdnum();

     cout << num1 <<" " << num2 << " " << num3 << endl;

    Max = getMinandMax (num1 , num2, num3)

    Min = 
        



    
}

int getRdnum ()
{ 
    int random;
    random = rand() % 9 + 1;
    return random;
} 


int getMinandMax (int , int, int)
{





}