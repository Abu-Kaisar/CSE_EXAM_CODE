#include<iostream>
using namespace std;
int main() {

	int a, b, c;
	int z[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	for (a = 0; a < 3; a++) {
		c = 999;
		for (b = 0; b < 4; b++) {
			if (z[a][b] < c) {
				c = z[a][b];
				cout << c << endl;
			}
		}
	}

	return 0;
}