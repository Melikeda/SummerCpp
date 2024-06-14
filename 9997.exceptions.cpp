#include <iostream>
using namespace std;


int main() {

    try {
        int  age = 15;
        if (age>=18) {
            cout<< "Access granted - you are old enough.";
        }
        else {
            throw(age);
        }
    }

    catch(int myage){
        cout<<"Access denied - You must be at least 18 years old.\n";
        cout << "Age is:" << myage <<"\n";
    }

    return 0;
}