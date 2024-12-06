#include "file.cpp"
#include <iostream>

int main(void) {
  filebilanishlash *d = new filebilanishlash();
  d->setName("School 21");
  cout << d->getName() << endl;

  delete d;
  return 0;
}