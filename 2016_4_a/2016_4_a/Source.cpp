#include <iostream>
using namespace std;

int addition(int a, int b) {
	return a + b;
}

int main() {

	int x, y;
	cout << "Enter X: ";
	cin >> x;
	cout << "Enter Y: ";
	cin >> y;
	cout << "Result: " << addition(x, y) << endl;
	return 0;
}