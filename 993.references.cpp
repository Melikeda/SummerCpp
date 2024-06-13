#include <iostream>
using namespace std;

int main() {
	string food = "Pizza";
	string& meal = food;

	int x = 5;
	int &y =x;

	cout << food <<"\n";
	cout << &meal <<"\n";
	cout << meal <<"\n";

	cout << x << "\n";
	cout << y << "\n";
	cout << &y;
	
	return 0;
}