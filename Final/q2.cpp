#include <iostream>
#include <ctime>
#include  <cstdlib> 
#include <algorithm>
using namespace std;


void makearray(int [], int size);
void printarray(int [], int size);



int main()
{
  srand(time(NULL));     //initializes randoms 
  int size = rand() % 20;
  int arr[size]; 
  
  makearray (arr,size);
  int length = sizeof(arr)/sizeof(arr[0]); 
  sort(arr, arr+length, greater<int>());
  printarray(arr, size); 
  //count(arr, length); 

}

void makearray(int num[],int size)
{
  for (int i=0; i< size; i++){  
    num[i] = rand() % 41 + (-20); 

//   for(int i=0;i<6; i++)
//         num[i] = rand() % 50;
    }
}

void printarray(int num[],int size)
{
    for (int i=0; i < size; i++){
      cout << num[i] << "\t";
    }
    cout << endl;
}