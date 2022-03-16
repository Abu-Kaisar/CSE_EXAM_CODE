#include <iostream>

using namespace std;
int main() {

	int x = 5, y = 20, k = 2;
	if (x > y) {		//no output cz 5 > 20 not true so nothing will happen
		if (y > k) {
			k = x;
		}
		else {
			k = x + y;
			cout << k;
		}
	}
	

	return 0;
}