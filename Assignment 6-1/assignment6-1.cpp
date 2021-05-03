#include <iostream>
#include "intA.hpp" 
using namespace std; 

int main()
{

 IntegerArray N;

  N.fillUp();

  N.printAll();

 cout << "Current length is " << N.getLength() << endl;

 cout << "After sorting: \n ";

 N.sortAsc();

 N.printAll();


 cout << "Removing the last element: ";

    N.removeLastelm();

 cout << "Current length is " << N.getLength() << endl;

    N.printAll();


 cout << "Append the element ";

    N.appendElement(100);

 cout << "Current length is " << N.getLength() << endl;

    N.printAll();


}
