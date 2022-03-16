#include <iostream>
using namespace std;
int main() {

	int a = 10, b = 20;
	a += b++;
	cout << ++a << " " << b++ << endl;
	return 0;
}