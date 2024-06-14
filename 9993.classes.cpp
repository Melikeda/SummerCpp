#include <iostream>
using namespace std;

class myclass {
public:
	void Mymethod();
	void mymethod(){
		cout << "Hi!How are you?";
	}
};

void myclass::Mymethod() {
	cout << " What are you doing?";
}

int main() {

	myclass myobj;
	myobj.mymethod();
	myobj.Mymethod();

	return 0;
}