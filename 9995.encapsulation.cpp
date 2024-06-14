#include <iostream>
using namespace std;

class Employee {
private:
    int salary;

public:
    void setsalary(int s) { //Used to securely modify private data
        salary = s;
    }
    int getsalary() {  //Used to securely access private data
        return salary;
    }
};

int main() {
    Employee myObj;
    myObj.setsalary(45000);

    cout << myObj.getsalary();

    return 0;
}