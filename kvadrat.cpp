#include <iostream>
#include <math.h>

using namespace std;


int main(void) {
    
    int n = 0;
    cout << "n = "; cin >> n;

    cout << n << endl;

    for(int i = 1; i <= n; i++) {
        cout << pow(i, 2) << endl;
    }
    return 0;
}