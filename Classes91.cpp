#include <iostream>
using namespace std;

class Sayi {
public:
    int deger;

    // Constructor
    Sayi(int x) {
        deger = x;
    }

    // == operatörünü overload ediyoruz
    bool operator==(Sayi s) {
        return deger == s.deger;
    }
};

int main() {
    Sayi a(5);
    Sayi b(5);
    Sayi c(3);

    cout << (a == b) << endl; // 1 (true)
    cout << (a == c) << endl; // 0 (false)
}
