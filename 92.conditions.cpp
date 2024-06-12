#include <iostream>
using namespace std;

int main() {
	int time = 5;
	string result = (time > 15) ? "Good day." : "Good evening."; //if the expression is true, it will return to the second if it is wrong.
	cout << result;

	return 0;
}