#include <iostream>
#include <string>

using namespace std;

class myClass {
public:
    myClass(string str) {
        serName(str);
        cout << "ishlayabdi muhimi" << endl;
    }
    void serName(string s) {
        name = s;
    }

    string getName() {
        return name;
    }
    
private:
    string name;
};

int main(void) {
    myClass obekt("Sanjar");
    myClass jj("Omon");
    cout << obekt.getName() << endl;
    cout << jj.getName() << endl;

    return 0;
}