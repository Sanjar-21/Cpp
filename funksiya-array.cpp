#include <cstdio>
#include <iostream>

using namespace std;

void arr(int aray[], int arrSize) {
  for (int i = 0; i < arrSize; i++) {
    cout << aray << endl;
  }
}

int main(void) {
  int aa[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  int aaSize = sizeof(aa) / sizeof(aa[0]);

  cout << arr(aa, aaSize);

  return 0;
}
