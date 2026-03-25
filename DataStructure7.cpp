//Nesting Structure

#include <iostream>
using namespace std;

struct Date {
    int day;
    int month;
    int year;
};

struct Student {
    string name;
    Date birth;   // iç içe struct
};

int main() {
    Student s1;

    s1.name = "Eda";
    s1.birth.day = 1;
    s1.birth.month = 5;
    s1.birth.year = 2004;

    cout << s1.name << endl;
    cout << s1.birth.day << "/" 
         << s1.birth.month << "/" 
         << s1.birth.year << endl;

    return 0;
}
