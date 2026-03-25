#include <iostream>
using namespace std;

struct Student {
    string name;
    int age;
};

void printStudent(Student s) {
    cout << s.name << " - " << s.age << endl;
}

int main() {
    Student s1 = {"Eda", 20};

    printStudent(s1);

    return 0;
}
