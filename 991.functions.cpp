#include <iostream>
using namespace std;

int myfunction(int x, int y) {
	return x + y;
}

int main() {
	int z;
	z = myfunction(7, 8);
	cout << z << "\n";
	cout << myfunction(3, 3);
	
	return 0;
}