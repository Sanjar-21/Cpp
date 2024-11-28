#include <iostream>

using namespace std;

void printNumber(int n) { cout << n << endl; }
void printFloat(float k) { cout << k << endl; }

int main(void) {
  int k = 11;
  float a = 2.1;
  printNumber(k);
  printFloat(a);
  return 0;
}
