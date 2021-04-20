#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdlib>
using namespace std;
int getRdnum (void);
int getMax (int , int, int);
int getMin (int , int, int);
int differance(int , int);



int main()
{
    int num1, num2, num3, Max, Min;

     srand(time(0));
      
    num1 = getRdnum();

    num2 = getRdnum();

    num3 = getRdnum();

     cout << num1 <<" " << num2 << " " << num3 << endl;

    Max = getMax (num1 , num2, num3);

    Min = getMin (num1 , num2, num3);

    cout << Max << " " << Min << endl;
        



    
}

int getRdnum ()
{ 
    int random;
    random = rand() % 9 + 1;
    return random;
} 


int getMax (int number1, int number2, int number3)
{
    //max code
     if (number1 >= number2 && number1 >= number3)
     {
        return number1;
     }
     
     else if (number2 >= number1 && number2 >= number3)
     {
        return number2;
     }
    
     else if (number3 >= number1 && number3 >= number2)
     {
         return number3;
     }
 return 0;
}

int getMin (int number1, int number2, int number3)
{
     // min code 
    if (number1 <= number2 && number1 <= number3)
     {
        return number1;
     }
     
     else if (number2 <= number1 && number2 <= number3)
     {
        return number2;
     }
    
     else if (number3 <= number1 && number3 <= number2)
     {
         return number3;
     }

return 0;
}