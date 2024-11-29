#include <iostream>

using namespace std;
// public // private // protected
// public
// Cpp 
class Sanjar {
    public:
        void hello() {
            cout << "hello world" << endl;
        }
        void world(){
            cout << "salom dunyo" << endl;
        }
};

int main(void) {
    Sanjar jon ;

    jon.hello();
    jon.world();

    return 0;
}