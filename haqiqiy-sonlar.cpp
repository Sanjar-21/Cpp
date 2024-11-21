#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a = 8.4  ;
    float b = 5.6;

    cout << "floor(a) = " << floor(a) << endl; // 8
    cout << "floor(b) = " << floor(b) << endl; // 5

    cout << "ceil(a) = " << ceil(a) << endl; // 9
    cout << "ceil(b) = " << ceil(b) << endl; // 6

    cout << "trunc(a) = " << trunc(a) << endl; // 8
    cout << "trunc(b) = " << trunc(b) << endl; // 5

    cout << "round(a) = " << round(a) << endl; // 8 yahlitlash
    cout << "round(b) = " << round(b) << endl; // 6 yahlitlash

    return 0;
}