#include <iostream>
using namespace std;


int main()
{

    double Celcius, Fahrenheit;

    cout << "\nEnter the temperature in celcius\n";
    cin >> Celcius;

    Fahrenheit = (9/5.0)*Celcius + 32;

    cout << Celcius << " degree Celcius in Fahrenheit is " << Fahrenheit << " degrees"<< endl; 


}