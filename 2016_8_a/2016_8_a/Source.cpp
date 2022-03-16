#include <iostream>
using namespace std;
int main() {
	int a = 1;
	a = a++ + ++a;
	cout << a << endl;
	cout << ++a << endl;
	cout << a++ << endl;
	return 0;
}