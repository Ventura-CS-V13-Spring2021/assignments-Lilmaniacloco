#include <iostream>
using namespace std;

int getNumDiv(int []);

int main() {
  int arr[6] = {3,5,16,25,26,30};
  int num = getNumDiv(arr);
  cout << "The number with the most factors is: " << num << endl;

  return 0;
}

int getNumDiv(int numbers[]) {
  //count # of factors
  int count = 0, prevCount = 0, maxNum = 0;

  for (int i=0; i<6; i++) {
    count = 0;
    for (int j=2; j<numbers[i]; j++) {
      if ((numbers[i] % j) == 0) {
        count += 1;