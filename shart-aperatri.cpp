#include <iostream>
// if shart aperati cpp

using namespace std;

int main(void) {
  int n = 0;
  cout << "n = ";
  cin >> n;

  if (n > 0) {
    cout << "kirtilgan son musbat son" << endl;
  } else if (n == 0) {
    cout << "n soni busbat ham manfiy ham emas \n";
  } else {
    cout << "kirtilgan son manfiy son" << endl;
  }

  return (0);
}