#include <iostream>
using namespace std;

void swapfunction(string&melike, string&eda) {
	string kulahci = melike;
	melike = eda;
	eda = kulahci;
}

int main() {
	string firstname = "alice";
	string secondname = "cullen";

	cout << "Before swap:" << "\n";
	cout << firstname << " " << secondname << "\n";

	swapfunction(firstname, secondname);

	cout << "After swap:" << "\n";
	cout << firstname << " " << secondname << "\n";

	return 0;
}