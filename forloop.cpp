#include <iostream>

using namespace std;
void forfor(int n) {
    for(int i = 0; i <= n; i++) {
        cout << i << endl;
    }
}

int main(void) {
    // for(int i = 0; i <= 10; i++) {
    //     cout << i << endl;
    // }
    int sum = 0;
    for(int i = 0; i <= 10; i++) {
        sum = sum + i ; cout << sum << endl;
    }

    forfor(8);
    return 0;
}