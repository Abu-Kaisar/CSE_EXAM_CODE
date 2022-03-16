#include <iostream>
using namespace std;
int main() {

	double number;
	int count = 0; //value initialized
	do {
		cout << "Enter a Number= ";
		cin >> number;
		count++;  //value increament
	} while (count < 6);

	return 0;
}