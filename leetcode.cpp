#include <iostream>
#include <string.h>

using namespace std;

class Sulotion {
public:
  char printchar(char arr[], int size) {
    int n = 0;
    int jam = 0;
    char num = arr[0];
    for (int i = 0; i < size; i++) {
      // cout << arr[i] << endl;
      if (arr[i] == num) {
        jam++;
      }
    }
    cout << jam << "a" << endl;
    return n;
  }
};

int main(void) {
  Sulotion olim;
  char a[] = "asdadadsfaasgdsgsdfsfdsdfasdfas";
  int lenght = strlen(a);
  olim.printchar(a, lenght);

  //
  return 0;
}