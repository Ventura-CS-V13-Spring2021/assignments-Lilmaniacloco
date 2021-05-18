#include <iostream>
#include <ctime>
#include  <cstdlib> 
#include <algorithm>
using namespace std;

int getNumDiv(int []);
void makearray(int []);
void printarray(int []);


int main() {
    int arr[]={};
    srand(time(0));
    makearray(arr);
    sort(arr, arr + 6);
  
    printarray(arr);
 // int arr[6] = {3,5,16,25,26,30};
  int n= getNumDiv(arr);
  cout << "The number with the most factors is: " << n << endl;

  return 0;
}

void makearray(int num[])
{
    for(int i=0;i<6; i++)
        num[i] = rand() % 50;
}


void printarray(int num[])
{
    for(int i=0;i<6; i++)
        cout << num[i] << "\t";
    cout << endl;
}


int getNumDiv(int a[])
{
  int max;  
  int highestFactors = 0;  
  int count; 

  for (int i = 0; i < 6; i++)
  {
    count = 0; 
    for (int j = 1; j < a[i]; j++)
    {
      if (a[i]%j == 0)
      {
        count++;  

      }
    }
    cout << "num factors in element " << a[i] << " is " << count << endl;

    
    if (count > highestFactors)
    {
      highestFactors = count; 
      max = a[i]; 

    }
  }

  return max; 
} 
