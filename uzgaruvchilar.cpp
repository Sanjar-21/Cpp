#include <iostream>

using namespace std;

int main(void) {
  cout << "Salom dunyo" << endl; // cout cerr deyarli bir xil vazifani bajaradi

  cerr << "Hello World" << endl; // cerr bu asosan malum funksiyda xato
                                 // chiqarish uchun ishlatiladi
  int a = 12; // int 4 byt joy oladi
  int b = 9; // int 4 byt joy oladi 

  cout << a + b << endl;
  cout << a - b << endl;
  cout << a * b << endl;
  cout << a / b << endl;
  int j = 0;
  cout << "j = ";
  cin >> j;

  cout << j << endl;
  return 0;
}