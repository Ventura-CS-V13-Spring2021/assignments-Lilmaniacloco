#include <iostream>
#include <ctime>
#include  <cstdlib> 
#include <algorithm>
using namespace std;


void makearray(int [], int size);
void printarray(int [], int size);
void count (int [], int size);



int main()
{
  srand(time(NULL));     //initializes randoms 
  int size = rand() % 20;
  int arr[size]; 
  
  makearray (arr,size);

  sort(arr, arr+size, greater<int>());
  printarray(arr, size); 
  cout<< endl;
  count(arr, size); 

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

void count(int num[], int size)
{
int count = 0;

  cout << "N" << "\t" << "Count" << endl;

  for (int i = 0; i < size; i++){ 
    for (int j =0; j < size; j++){
        if ( num[i] == num[j] ){
            count ++;
            continue;
        }
    }
    cout << num[i] << "\t" << count << endl;
    count = 0;
  }
  cout << endl;
