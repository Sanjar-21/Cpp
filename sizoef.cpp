#include <iostream>

using namespace std;

int main(void) {
    cout << "char: " << sizeof(char) << endl; // 1 bayt
    cout << "int " << sizeof(int) << endl; // 4 bayt
    cout << "float " << sizeof(float) << endl; // 4 bayt
    cout  << "double: " << sizeof(double) << endl; // 8 bayt
    cout << "string: " << sizeof(string) << endl; // 32 bayt
    cout << "short int: " << sizeof(short int) << endl; // 2 bayt 
    cout << "long int: " << sizeof(long int) << endl; // 4 bayt
    cout << "long double: " << sizeof(double) << endl; // 8 bayt
    cout << "long long int: " << sizeof(long long int) << endl; // 8 bayt


    return 0;
}