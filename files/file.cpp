#include <iostream>
#include "file.h"

using namespace std;

filebilanishlash::filebilanishlash() {

}

filebilanishlash::~filebilanishlash() {
    
}
// classni filga chaqarish bu :: -> orqali ifodalandi?
void filebilanishlash::setName(string abs) {
    name = abs;
}

string filebilanishlash::getName() {
    return name;
}

int main(void) {

    return 0;
}