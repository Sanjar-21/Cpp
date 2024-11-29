#include <iostream>

using namespace std;
// public
// Cpp
class Array {
    public:
        void arrr(int ar[], int size) {
            for(int i = 0; i < size; i++) {
                cout << ar[i] << endl;
            }
        }
};

int main(void) {
    Array gul;
    int mm[] = {1,2,3,4,45,6,7};
    int lenght = sizeof(mm) / sizeof(mm[0]);

    gul.arrr(mm, lenght);
    return 0;
}