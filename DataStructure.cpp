#include <iostream>
using namespace std;

struct Student {   //Struct tanımı. Burada yeni bir veri tipi oluşturduk: Student
    string name;
    int age;
    double grade;
};

int main() {

    Student s1;   //Değişken oluşturma

    s1.name = "Eda";     //Değer atama
    s1.age = 20;
    s1.grade = 90.5;

    cout << s1.name << endl;
    cout << s1.age << endl;
    cout << s1.grade << endl;

    return 0;
}
