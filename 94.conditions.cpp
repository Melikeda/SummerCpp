#include <iostream>
using namespace std;

int main() {
	int x = 0;
	int y = 1;

	while (x <= 10) {
		cout << x << "\n";
		x=x+2;
	}

	do {
		cout << y << "\n";
		y++;
	} while (y < 7);

	for (int z = 0; z < 5; z=z+1) {
		cout<<z <<"\n";
	}

	for (int a = 10; a > 0; a--) {
		cout << a << "\n";
	}

	return 0;
}