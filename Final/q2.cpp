#include <iostream>
#include <ctime>
#include  <cstdlib> 
#include <algorithm>
using namespace std;


void makearray(int []);
void printarray(int []);



int main()
{
  int arr[20]; 
  int length; 
  length = setArray(arr); 

  sort(arr, length); 
  print(arr, length); 
  count(arr, length); 

}

void makearray(int num[])
{
    for(int i=0;i<6; i++)
        num[i] = rand() % 50;
}
