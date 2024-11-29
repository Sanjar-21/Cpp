#include <iostream>
#include <ostream>

using namespace std;
int fig(int n) {
  if (n <= 2)
    return 1;
  else
    return fig(n - 1) + fig(n - 2);
}

int main(void) {
  int n = 5;
  cout << fig(6) << endl;
  return 0;
}
