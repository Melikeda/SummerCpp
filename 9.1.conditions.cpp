#include <iostream>
using namespace std;

int main() {
	int time = 23;
	if (time < 9) {
		cout << "Good morning!";
	}
	else if(time < 19) {
		cout << "Good day!";
	}
	else {
		cout << "Good night!";
	}

	return 0;
}
