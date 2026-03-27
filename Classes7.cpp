// pointer to classes example
#include <iostream>
using namespace std;

class Rectangle {
    int width, height;   // 🔹 private üyeler

public:
    // 🔥 Constructor (initializer list kullanımı)
    Rectangle(int x, int y) : width(x), height(y) {}

    int area(void) {     // 🔹 alan hesaplama fonksiyonu
        return width * height;
    }
};

int main() {

    Rectangle obj(3, 4);  
    // 🔹 Normal nesne (STACK)
    // width=3, height=4

    Rectangle *foo, *bar, *baz;
    // 🔹 3 pointer tanımlandı (henüz hiçbir şeyi göstermiyorlar)

    foo = &obj;
    // 🔹 foo → obj'nin adresini tutar
    // 👉 mevcut nesneyi gösteriyor (stack'teki)

    bar = new Rectangle(5, 6);
    // 🔥 HEAP'te yeni nesne oluşturuldu
    // width=5, height=6
    // 👉 new kullanıldığı için delete gerekir

    baz = new Rectangle[2] { {2,5}, {3,6} };
    // 🔥 HEAP'te 2 elemanlı dizi oluşturuldu
    // baz[0] → width=2, height=5
    // baz[1] → width=3, height=6

    cout << "obj's area: " << obj.area() << '\n';
    // 🔹 normal nesne → . operatörü
    // 3×4 = 12

    cout << "*foo's area: " << foo->area() << '\n';
    // 🔹 pointer → -> operatörü
    // (*foo).area() ile aynı
    // yine obj → 12

    cout << "*bar's area: " << bar->area() << '\n';
    // 🔹 heap'teki nesne
    // 5×6 = 30

    cout << "baz[0]'s area: " << baz[0].area() << '\n';
    // 🔹 dizi elemanı (pointer + index)
    // 2×5 = 10

    cout << "baz[1]'s area: " << baz[1].area() << '\n';
    // 🔹 ikinci eleman
    // 3×6 = 18

    delete bar;
    // 🔥 heap'teki tek nesne silinir

    delete[] baz;
    // 🔥 heap'teki dizi silinir (çok önemli ❗)

    return 0;
}
