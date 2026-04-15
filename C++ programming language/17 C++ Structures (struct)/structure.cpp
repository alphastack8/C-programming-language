#include <iostream>
#include <string>
using namespace std;

int main() {
  struct {
    int myNum;
    string myString;
  } myStructure;

  myStructure.myNum = 1;
  myStructure.myString = "Hello Alpha!";

  cout << myStructure.myNum << "\n";
  cout << myStructure.myString << "\n";
  return 0;
}