#include <iostream>

using namespace std;

int main(void) {
    // int n = 0;
// nishon:
    // cout << "n = " ;
    // cin  >> n;
    // if(0 < n) {
    //     cout << "n qabul qildi \n";
    // } else {
    //     goto nishon;
    // }

    int n, m;
qayta:
    cout << "n = "; cin >> n;
    cout << "m = "; cin >> m;

    if(m != 0) {
        cout << n / m << endl;
    }else {
        goto qayta;
    }
    return (0);
}