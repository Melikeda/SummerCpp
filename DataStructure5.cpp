//Pointer too Structure Getline 

#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int age;
};

int main() {
    Student s1;
    Student* ptr = &s1;

    cout << "Isim gir: ";
    getline(cin, ptr->name);   // boşluk dahil alır

    cout << "Yas gir: ";
    cin >> ptr->age;           // int olduğu için cin kullanıyoruz

    cout << "\nBilgiler:\n";
    cout << ptr->name << " - " << ptr->age << endl;

    return 0;
}
