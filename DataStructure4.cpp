//Pointer to Structure

#include <iostream>
using namespace std;

struct Student {
    string name;
    int age;
};

int main() {
    Student s1;
    Student* ptr = &s1;

    cout << "Isim gir: ";
    cin >> ptr->name;

    cout << "Yas gir: ";
    cin >> ptr->age;

    cout << "\nBilgiler:\n";
    cout << ptr->name << " - " << ptr->age << endl;

    return 0;
}
