#include <iostream> 
#include <cstdlib>
#include <ctime>
#include "intA.hpp"
using namespace std; 


int IntegerArray::getLength(void) const
{

     return length;
}
int IntegerArray::getLastelm(void) const
{

     return numbers[length-1]; 
}
void IntegerArray::printAll(void) const
{

 for (int i = 0; i < length; i++)
    cout << numbers[i] << "\t"; 
    cout << endl; 
}
void IntegerArray::fillUp(void)
{
 length = N; 
  srand(time(0)); 
  for (int i = 0; i < length; i++)
  {
    numbers[i] = random()% 100 ; 
  }

    
}
void IntegerArray::sortAsc()
{

for(int i=0;i<length;i++)
	{		
		for(int j=i+1;j<length;j++)
		{
			if(numbers[i]>numbers[j])
			{
				int temp  = numbers[i];
				numbers[i]=numbers[j];
				numbers[j]=temp;
			}
		}
	}
}

    
void IntegerArray::removeLastelm(void)
{

    length = length - 1;
}
void IntegerArray::appendElement(int v)
{

    numbers[length] = v;

     length ++;
}