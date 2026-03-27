// member initialization
#include <iostream>
using namespace std;

class Circle {
    double radius;   // 🔹 private üye (yarıçap)

public:
    // 🔥 Constructor + initializer list
    Circle(double r) : radius(r) {}  
    // 👉 radius = r; yerine doğrudan initialize edilir (daha doğru ve hızlı)

    double area() {
        return radius * radius * 3.14159265;   // 🔹 πr²
    }
};

class Cylinder {
    Circle base;   // 🔥 başka bir class türünde üye (Circle nesnesi)
    double height; // 🔹 yükseklik

public:
    // 🔥 Constructor + member initialization list
    Cylinder(double r, double h) : base(r), height(h) {}
    // 👉 base(r) → Circle constructor çağrılır
    // 👉 height(h) → height initialize edilir
    // ❗ body içinde yazılamaz (özellikle base için)

    double volume() {
        return base.area() * height;   // 🔹 hacim = taban alanı × yükseklik
    }
};

int main() {
    Cylinder foo(10, 20);  
    // 🔥 constructor çağrılır:
    // base(10) → Circle oluşturulur (radius=10)
    // height(20)

    cout << "foo's volume: " << foo.volume() << '\n';
    // 👉 hacim = π * 10² * 20 = 6283.18

    return 0;
}
