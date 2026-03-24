#include <iostream>
using namespace std;

int main() {
    int* p = new int;  // Bellekte boş bir int alanı açılır. Bu alanın adresi p'ye verilir

    *p = 25;  // *p → p’nin işaret ettiği adresin içindeki değer

    cout << "Deger: " << *p << endl;

    delete p;
}
