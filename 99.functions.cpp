#include <iostream>
using namespace std;

void myFunction(int fnumber) {
	cout << fnumber << " number\n";
}

void Myfunction(string fname) {
	cout << fname << " Kulahci\n";
}


int main() {
	myFunction(5);
	myFunction(6);
	myFunction(7);
	Myfunction("Melike");
	Myfunction("Eda");
	
	return 0;
}