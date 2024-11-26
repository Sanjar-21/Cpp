#include <iostream>
#include <stdlib.h>
#include <time.h> 

using namespace std;

int main(void) {
    srand(time(NULL));
    int i = 0;
    int x ;

    while (i < 5) {
        x = rand() % 100 + 1;
        cout << x << endl;
        i++;
    }
    cout << i << endl;
    return 0;
}