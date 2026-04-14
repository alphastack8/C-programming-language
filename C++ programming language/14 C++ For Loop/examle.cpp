#include <iostream>
using namespace std;

int main() {
  int sum = 0;
  
  // Calculate the sum of numbers from 1 to 5:
  for (int i = 1; i <= 5; i++) {
    sum = sum + i;
  }
  cout << "Sum is " << sum;
}