#include <iostream>
using namespace std;

struct Student {
    string name;
    int age;
};
 açıkla
int main() {
    Student s1 = {"Eda", 20};

    Student* ptr = &s1;

    cout << ptr->name << endl;
    cout << ptr->age << endl;

    return 0;
}
