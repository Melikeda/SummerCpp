#include <iostream>
using namespace std;

int main() {
	string food = "pizza";
	string* ptr = &food;

	cout << food << "\n";
	cout << *ptr << "\n";
	cout << ptr << "\n";
	cout << &food << "\n\n";

	*ptr = "Hamburger";

	cout << food << "\n";
	cout << *ptr << "\n";
	cout << ptr << "\n";
	cout << &food << "\n";
	
	return 0;
}
