#include <iostream>

using namespace std;

int main(void) {
    int n, number, d;
    int reverse = 0;

    cout << "n : kritig: ";
    cin >> n ;
    number = n;

    do {
        d = number % 10;
        reverse = (reverse * 10) + d;
        number = number / 10;

    } while(number != 0);

    if(n == reverse) {
        cout << "bu palindrom" << endl;
    } else {
        cout << "bu shunchake raqam" << endl;
    }
    return 0;
}