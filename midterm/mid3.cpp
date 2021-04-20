#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdlib>
using namespace std;
int getRdnum (void);
int getMax (int , int, int);
int getMin (int , int, int);
int differance(int , int);
void fileWrite (ofstream &, int);


int main()
{
    int num1, num2, num3, Max, Min, Diff;

    ofstream ofs;

    ofs.open ("question3.txt");

     srand(time(0));
      
    num1 = getRdnum();

    num2 = getRdnum();

    num3 = getRdnum();

     cout << num1 <<" " << num2 << " " << num3 << endl;

    Max = getMax (num1 , num2, num3);

    Min = getMin (num1 , num2, num3);

    cout << "Max: "<< Max << " Min: "<< Min << endl;

       Diff = differance (Max, Min);

    if (Diff < 3)
        {
            exit (1);
        
        }
    else
    {
        fileWrite (ofs, Diff);
        cout << "The differance between Max and Min: " << Diff << endl;
    }
        
        
    ofs.close();    

    
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


int differance(int Max , int Min)
{
    int diff;
    diff = Max - Min;

    return diff;

}

void fileWrite  (ofstream &ofs, int diff)
{
    ofs << diff << endl;


}

/* this problem was straight forward for me, there wasn't many problems in getting it to run well. I wrote all the funtions in and the main body, then i got to work on coding the different functions. The trouble i did have was finding the function to work on since in my program there was 5 funtions have to scroll down and pinpointing it, made it a slow process . other then that I just tested the functions each time i finished one and moved on the next one.
*/