#include <iostream>
using namespace std;
int main() {

	int a = 10;
Loop:
	do {
		if (a == 15) {
			a = a + 1;
			goto Loop;
		}
		cout << "Value of a: " << a<< endl;
		a++;
	} while (a < 20);

	return 0;


}