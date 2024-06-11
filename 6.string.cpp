#include <iostream>
#include <string>
using namespace std;

int main() {
	string firstName = "John";
	string lastName = "Doe";
	string fullName = firstName.append(lastName);  //you can also concatenate strings with the append() function
	cout << fullName;
	
	return 0;
}
