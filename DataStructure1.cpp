#include <iostream>
using namespace std;

struct Student {
    string name;
    int age;
    double grade;
};

int main() {

    Student s1;

    cout << "Isim gir: ";
    cin >> s1.name;

    cout << "Yas gir: ";
    cin >> s1.age;

    cout << "Not gir: ";
    cin >> s1.grade;

    cout << "\n--- Ogrenci Bilgileri ---" << endl;
    cout << "Isim: " << s1.name << endl;
    cout << "Yas: " << s1.age << endl;
    cout << "Not: " << s1.grade << endl;

    return 0;
}
