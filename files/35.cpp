#include <iostream>
#include <string.h>
#include "35.h"

using namespace std;

Person::Person(){}
Person::~Person(){}

void Person::setName(string str) {
    name = str;
}

string Person::getName() {
    return name;
}
int main(void) {
    Person m;

    return 0;
}