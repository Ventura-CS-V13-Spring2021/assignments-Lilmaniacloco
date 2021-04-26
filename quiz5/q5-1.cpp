#include    <iostream>
using namespace std;

int main()
{
    const int SIZE=10;
    int     numbers[10] = {5, 10, 75, 80, 25, 55, 95, 70, 60, 15};
    int     diff[10];
    int     sum=0;

    for(int i=0;i<SIZE;i++)
    {
        cout << numbers[i] << "\t";
    }
        cout << endl;
    for (int i = 0; i <SIZE ; i++)
    {
        diff[i] = 490 - numbers[i];
        cout << diff[i] << "\t";
        
    }
    
     cout << endl;
         
        
    
    
}