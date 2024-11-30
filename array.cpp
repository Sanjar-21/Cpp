#include <iostream>

using namespace std;

int main(void) {
  int a[] = {1, 2, 4, 5, 6, 7, 78};
  int size = sizeof(a) / sizeof(int); // bunda bu 7 ga teng

  for (int i = 0; i < size; i++) {
    cout << "a[" << i << "] = " << a[i] << endl;
  }

  return (0);
}
