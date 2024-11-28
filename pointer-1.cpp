#include <iostream>

using namespace std;

int main(void) {

    int var = 14;
    int *p = &var;

    cout << &var << endl; //14
    cout << p << endl; // hotira joyi varni qayerda turgan joyini bildiradi
    cout << *p << endl; // pointerni uzini chiqarish uchun *p bilan foydalanadi 

    int x = 5;
    int *v = &x;
    x = x + 4; // 9 buladi 5 + 4;
    x = *v + 4; // 13 buladi 9 + 4;
    *v = *v + 4; // 17 buladi 13 + 4;
    cout << v << endl;
    cout << *v << endl;

    return (0);
}