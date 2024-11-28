#include <iostream>

using namespace std;

int fact(int a) {
	if(a == 1) return 1;
	else return a * fact(a -1);
}

int main(void) {
	int k = 5;
	cout << fact(k) << endl;
	return 0;
}
