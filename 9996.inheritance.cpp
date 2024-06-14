#include <iostream>
using namespace std;

//Base class
class vehicle {
public:
    string brand = "Ford";

    void honk() {
        cout << "du duuut! \n";
    }
};

//Derived class
class car : public vehicle {
public:
    string model = "Mustang";
};

int main() {
    car mycar;
    mycar.honk();
    
    cout << mycar.brand << " " << mycar.model;
    
 
    return 0;
}