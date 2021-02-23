#include <iostream>
using namespace std;
int main()
{
     int number1, number2, number3;
     cout << "Enter three integer values : " ;
     cin >> number1 >> number2 >> number3 ;
     
     if (number1 == number2 && number1 == number3)
     {
          cout << "All the numbers are the same\n";
     } 

     else if (number2 == number3)
     {
         cout << number2 << " is a duplicated number\n";
     }
     
     else if (number1 == number2 || number1 == number3)
     {
         cout << number1 << " is a duplicated number\n";
     }
     else
        cout <<" All the numbers are distinct\n";
     
     return 0;
}