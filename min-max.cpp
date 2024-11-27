#include  <iostream>

using namespace std;

int min(int a, int b) {
    if(a < b) return a;
    else return b;
}

int max (int a, int b) {
    if(a > b) return a;
    else return b;
}

int main(void) {
    int g = 2;
    int j = 4;
    cout << "MIN: " << min(g,j) << endl;
    cout << "MAX: " << max(g,j) << endl;
    return 0;
}