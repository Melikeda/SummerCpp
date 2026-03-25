//Nesting and Pointer Structure

#include <iostream>
using namespace std;

struct Date {
    int day;
    int month;
    int year;
};

struct Student {
    string name;
    Date birth;   // nested struct
};

int main() {
    Student s1 = {"Eda", {1, 5, 2004}};

    Student* ptr = &s1;  // pointer

    cout << "Isim: " << ptr->name << endl;

    cout << "Dogum: "
         << ptr->birth.day << "/"
         << ptr->birth.month << "/"
         << ptr->birth.year << endl;

    return 0;
}
