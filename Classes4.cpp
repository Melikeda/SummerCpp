// overloading class constructors
#include <iostream>
using namespace std;

class Rectangle {
    int width, height;

public:
    Rectangle();           // default constructor
    Rectangle(int, int);   // parametreli constructor

    int area(void) {
        return (width * height);
    }
};

// default constructor
Rectangle::Rectangle() {
    width = 5;
    height = 5;
}

// parametreli constructor
Rectangle::Rectangle(int a, int b) {
    width = a;
    height = b;
}

int main() {
    Rectangle rect(3, 4);  // parametreli constructor
    Rectangle rectb;       // default constructor

    cout << "rect area: " << rect.area() << endl;
    cout << "rectb area: " << rectb.area() << endl;

    return 0;
}
