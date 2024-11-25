#include <iostream>

using namespace std;

int main(void) {
    int n = 0;
nishon:
    cout << "n = " ;
    cin  >> n;
    if(0 < n) {
        cout << "n qabul qildi \n";
    } else {
        goto nishon;
    }
    return (0);
}