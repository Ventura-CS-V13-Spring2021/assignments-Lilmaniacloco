#include<iostream>
using namespace std;

int main()
{
        int num=65;

        while( num <= 90 )
        {
            if (!(num % 5))
                cout << endl;
                cout << ' ' << num << ',' << static_cast<char>(num) << ' ' ;
                num += 1;
        }
        cout << endl;

}