#include <iostream>
#include "file.h"

using namespace std;

filebilanishlash::filebilanishlash() {
    cout << "konsiktur" << endl;
}

filebilanishlash::~filebilanishlash() {
    cout << "disktuktir" << endl;
}
// classni filga chaqarish bu :: -> orqali ifodalandi?
void filebilanishlash::setName(string abs) {
    name = abs;
}

string filebilanishlash::getName() {
    return name;
}

// int main(void) {
//     filebilanishlash d;
//     d.setName("School 21");
//     cout << d.getName() << endl;
//     return 0;
// }