#include <iostream>
using namespace std;
int main() {

	int a = 5, b = 10, c = 6;
	if (a < b && a < c) {
		cout << "True" << endl;
	}
	if (b > 15 && c < 10 || a > 0) {
		cout << "True" << endl;
	}

	return 0;
}