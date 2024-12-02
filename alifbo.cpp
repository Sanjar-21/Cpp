#include <iostream>
#include <string.h>

/******************************
 * CPP buycha masivlarni sort *
 *           CPP              *
 ******************************/

using namespace std;

class SORT {
public:
  void sort_array(char arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
      for (int j = 0; j < size - i - 1; j++) {
        if (arr[j] > arr[j + 1]) {
          int temp = arr[j];
          arr[j] = arr[j + 1];
          arr[j + 1] = temp;
        }
      }
    }
    for (int i = 0; i < size; i++) {
      cout << arr[i];
    }
  }
};

int main(void) {
  SORT mm;
  char a1[] = "sfsdhvsdkjfhsdfkjsdfhskdfjh";
  int lenght = strlen(a1);
  mm.sort_array(a1, lenght);

  return 0;
}