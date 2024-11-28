#include <iostream>

using namespace std;

int main(void) {
    int ball = 5;

    int *pointer;
    pointer = &ball;

    cout << &ball << endl;
    cout << pointer << endl;

    return 0;
}