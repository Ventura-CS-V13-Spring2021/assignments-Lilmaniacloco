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
        num[i] = rand() % 100;
}


void printarray(int num[])
{
    for(int i=0;i<6; i++)
        cout << num[i] << "\t";
    cout << endl;
}

int getNumDiv(int numbers[]) {
  
  int count = 0, prevCount = 0, max = 0;

  for (int i=0; i<6; i++) {
    count = 0;
    for (int j=2; j<numbers[i]; j++) {
      if ((numbers[i] % j) == 0) {
        count += 1;
      }
    }
    if (count >= prevCount)
      max = numbers[i];
  }
  return max;
}