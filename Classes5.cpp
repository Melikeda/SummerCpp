// classes and uniform initialization
#include <iostream>
using namespace std;

class Circle {
    double radius;

public:
    Circle(double r) {
        radius = r;
    }

    double circum() {
        return 2 * radius * 3.14159265;
    }
};

int main() {
    Circle foo(10.0);    // functional form
    Circle bar = 20.0;   // assignment initialization
    Circle baz{30.0};    // uniform initialization
    Circle qux = {40.0}; // uniform (POD-like)

    cout << "foo's circumference: " << foo.circum() << '\n';

    return 0;
}
