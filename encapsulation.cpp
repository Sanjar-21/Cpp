#include <iostream>
#include <stdarg.h>

using namespace std;


class BankAccount {
    /*
 Private tagida malumotlarni heqachon mainda va
 boshqa joyda uzgartib bumaydi faqat uzini private ichida uz
 gartirsa buladi 
    */
private:
    string id = "AD0821211";
    int blanse = 400; // 
public:
    void depasit(string s, int b) {
        if(s == id) {
            blanse += b;
        }
        cout << blanse << endl;
    }
    void naqtpull(string s, int n) {
        if(s == id) {
            blanse -= n;
        }
    }

};

int main(void) {
    BankAccount m;
    m.depasit("AD0821211", 100);
    return 0;
}