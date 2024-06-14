#include <iostream>
using namespace std;

class Car {
public:
	string model;
	int year;
};

int main() {

	Car carObj1;
	carObj1.model = "BMW";
	carObj1.year = 5;

	Car carObj2;
	carObj2.model = "PORSCHE";
	carObj2.year = 1;

	cout << carObj1.model << " " << carObj1.year;

	return 0;
}