#include<iostream>
using namespace std;
int main() {

	int r, c, n;
	cin >> n;
	for (r = 1; r <= n; r++) {
		for (c = 1; c <= r; c++) {
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}