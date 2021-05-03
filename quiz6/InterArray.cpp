#include <iostream> 
#include <cstdlib>
#include <ctime>
#include "intArrayq6.hpp"
using namespace std; 


int IntegerArray::getLength(void) const
{

     return length;
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

void IntegerArray::sortArray(int flag)
{
    if (flag == 0)
    {
        for(int i=0;i< length ;i++)
            for(int j=i+1;j<length;j++)
		        if(numbers[i]>numbers[j])
			    {
			         int temp  = numbers[i];
			        numbers[i]=numbers[j];
			        numbers[j]=temp;
			    }

		    
    }
    if (flag != 0)
    {
        for(int i=0;i<length;i++)
        {		
            for(int j=i+1;j<length;j++)
            {
                if(numbers[i]<numbers[j])
                {
                    int temp  =numbers[i];
                    numbers[i]=numbers[j];
                    numbers[j]=temp;
                }
            }
        }
    }

    


}


int IntegerArray::getPrimenumber(void) const
{

int primeNum = 0, i, j; 
  for (i = 0; i < length; i++)
  {
    for (j = 2; j <= numbers[i]; j++){
      if (numbers[i]%j == 0)
        break; 
    }
    if (j==numbers[i]) 
      primeNum++; 
  }
  return primeNum; 
 
}
