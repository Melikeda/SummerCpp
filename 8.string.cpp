#include <iostream>
#include <string>
using namespace std;

int main() {
	string myString = "abcdefghijklmnoprstuvyzx";
	cout << myString[myString.length() - 1] << "\n";
	cout << myString[12] << myString[4] << myString[11] << myString[8] << myString[10] << myString[4] << "\n";

	myString[0] = 'A';
	cout << myString;

	return 0;
}
