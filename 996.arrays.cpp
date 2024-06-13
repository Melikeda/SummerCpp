#include <iostream>
using namespace std;

int main() {
	string cars[4] = { "BMW", "FERRARi", "AUDi", "PORSCHE" };
	cars[3] = "LAMBORGHiNi";
	cout << cars[3] << "\n";

	return 0;
}
