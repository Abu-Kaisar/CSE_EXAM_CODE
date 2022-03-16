#include <iostream>
using namespace std;
int main() {

	int x;
	for (x = 1; x < 33; x++) {
		if (x % 3 == 1) {
			break;	//breaks the whole loop 
		}
		cout << x << endl;
	}

	return 0;
}