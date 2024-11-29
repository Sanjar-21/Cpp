#include <iostream>
#include <ostream>

using namespace std;
int fig(int n) {
  if (n <= 2)
    return 1;
  else
    return n + fig(n - 1);
}

int main(void) {
  int n = 5;
  cout << fig(n) << endl;
  return 0;
}
