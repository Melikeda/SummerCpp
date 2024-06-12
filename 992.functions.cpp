#include <iostream>
using namespace std;

int functionone(int x, int y) {
	return x + y;
}

float functiontwo(float x, float y) {
	return x + y;
}

int main() {
	int z = functionone(12, 24);
	float f = functiontwo(2.99, 3.81);

	cout << z <<"\n" << f;
	
	return 0;
}