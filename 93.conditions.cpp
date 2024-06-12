#include <iostream>
using namespace std;

int main() {
	int day = 3;
	switch (day) {
	case 1:
		cout << "Monday";
		break;
	case 2:
		cout << "Tuesday";
		break;
	case 4:
		cout << "Thusday";
		break;
	case 5:
		cout << "Friday";
		break;
	case 6:
		cout << "Saturday";
		break;
	case 7:
		cout << "Sunday";
		break;
	default:  
		cout << "A month of Sundays!!";
	}

	return 0;
}