#include <iostream>
using namespace std;

class Rectangle {
    int width, height;   // DATA MEMBERS (private - default)

public:
    void set_values(int, int);   // 🔹 DECLARATION (sadece bildirildi)
    
    int area() {                 // 🔹 DEFINITION (burada tanımlandı)
        return width * height;
    }
};

void Rectangle::set_values(int x, int y) {   // 🔹 DEFINITION
    width = x;
    height = y;
}

int main() {
    Rectangle rect;   // object (nesne)

    rect.set_values(3, 4);   // fonksiyon çağrısı

    cout << "area: " << rect.area();   // sonucu yazdırır

    return 0;
}
