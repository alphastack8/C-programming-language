#include <iostream>
#include <string>
using namespace std;

int main() {
  string name[5];
  name[0] = "Ali";
  name[1] = "Zain";
  name[2] = "Zaya";
  name[3] = "Mortaza";
  name[4] = "Shiek";
  for(int i = 0; i < 5; i++) {
    cout << name[i] << "\n";
  }
  return 0;
}