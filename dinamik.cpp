#include <iostream>

using namespace std;

int main(void) {
	int a; // bu xotiradan statik kurinshda joy egalyadi va bazan bizga bu uzi yetmashu mukin 
	int *p = new int; // dinamik kurinshda joy ajaratish 

	*p = 8;
	cout << a << endl;
	cout << p << endl;
	cout << *p << endl;

	delete p; // va buni uchirib ketish xotirdan (free)

	/*
Masivlarda ham buni ishlatsa buladi yaniy dinamik joy =
= ajratsa buladi

	*/
	int *b = NULL; //
	b = new int[77];// 
	delete[] b;// 
	return 0;
}