#include <iostream>
using namespace std;

int main() {
	struct {
		string food;
		int person;
	} meal1, meal2 ;

	meal1.food = "Pizza";
	meal1.person = 2;

	meal2.food = "Kebab";
	meal2.person = 5;

	cout << meal1.food << " " << meal2.person;

	return 0;
}