#include <iostream>
using namespace std;
int main() {

	int num;
	cout << "Input Number: ";
	cin >> num;
	if (num % 2 == 0) {
		cout << num << " is Even Number" << endl;
	}
	else {
		cout << num << " is Odd Number" << endl;
	}

	return 0;
}