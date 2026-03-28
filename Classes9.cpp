#include <iostream>
using namespace std;

class Sayi {
public:
    int deger;

    // Constructor
    Sayi(int x) {
        deger = x;
    }

    // + operatörünü overload ediyoruz
    Sayi operator+(Sayi s) {
        Sayi sonuc(0);
        sonuc.deger = deger + s.deger;
        return sonuc;
    }
};

int main() {
    Sayi a(5);
    Sayi b(3);

    Sayi c = a + b;   // operator+ çağrılır

    cout << c.deger;  // 8
}
