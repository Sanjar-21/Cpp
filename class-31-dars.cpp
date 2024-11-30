#include <iostream>

using namespace std;

class BankAccount {
    int blanse = 100;
public:
    int myBlanse() {
        return blanse * 9500;
    }
};

int main(void) {
    BankAccount n;
    cout << n.myBlanse() << endl;
    // bugingi dars bu abstrak tushncha hudi shunchaki count yozganmiday uni oqa fonida =
    // = nima bulyatganini bilmaymiz shuni abstrack tushuncha deyiladi hudi 
    // BankAccount class yuzasida kurdik biz

    return 0;
}