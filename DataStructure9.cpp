//Union

#include <iostream>
using namespace std;

union Data {
    int i;
    float f;
    char c;
};

int main() {
    Data d;

    d.i = 65;
    cout << "int: " << d.i << endl;

    d.f = 3.14;
    cout << "float: " << d.f << endl;

    d.c = 'A';
    cout << "char: " << d.c << endl;

    return 0;
}
