#include <iostream>
#include <cmath>
using namespace std;

int main() {

	int x, n;
	long sum = 0;
	cout << "Enter the value of x: ";
	cin >> x;
	cout << "Enter the value of n: ";
	cin >> n;

	for (int i = 0; i <= n; i++) {
		sum += pow(x, i);
	}
	cout << "Output of the Series is: ";
	cout << sum;

	return 0;
}