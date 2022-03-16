#include <iostream>
using namespace std;
int main() {
	int i;
	for (i = 0; i < 10; i++) {
		if ((i % 2 == 0) || (i % 3 == 0)) {
			continue; //multiplyer of 2 and 3 are out of count so 1 5 7
		}
		cout << i << endl;
	}
	return 0;
}