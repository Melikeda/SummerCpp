#include <iostream>
using namespace std;

int main() {
	for (int x = 0; x <= 10; x=x+2) {
		if (x==4) {
			continue;
		}
		if (x == 8) {
			break;
		}
		cout << x << "\n";
	}

	return 0;
}