#include <iostream>
using namespace std;

struct Student {
    string name;
    int age;
};

int main() {
    Student students[3];

    students[0].name = "Ali";
    students[1].name = "Eda";
    students[2].name = "Ayse";

    for(int i = 0; i < 3; i++) {
        cout << students[i].name << endl;
    }

    return 0;
}
