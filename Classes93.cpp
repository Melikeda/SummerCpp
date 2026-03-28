#include <iostream>
using namespace std;

class Ogrenci {
public:
    static int sayi;   //  static değişken (ortak)

    Ogrenci() {
        sayi++;        // her nesne oluşunca artar
    }
};

//  static değişken class dışında tanımlanır
int Ogrenci::sayi = 0;

int main() {
    Ogrenci a;
    Ogrenci b;
    Ogrenci c;

    cout << Ogrenci::sayi;  // 3
}
