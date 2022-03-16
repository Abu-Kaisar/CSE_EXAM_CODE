#include<iostream>
using namespace std;
int main() {

	int r, c, s, n;
	cin >> n;
	for (r = n; r > 0; r--) {
		for (c = r; c > 0; c--) {
			cout << "*";
		}
		cout << endl;
	}



	return 0;
}