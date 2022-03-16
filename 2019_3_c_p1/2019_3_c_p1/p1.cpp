#include <iostream>
using namespace std;
int main() {

	int a;
	for (a = 2; a < 88; a++) {
		if ((a % 2 == 0) || (a % 5 == 0)) {
			continue;	//breaks the iteration and skip that number
		}
		cout << a << endl;
	}

	return 0;
}