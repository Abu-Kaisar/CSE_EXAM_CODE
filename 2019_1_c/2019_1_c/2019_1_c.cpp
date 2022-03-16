#include <iostream>
using namespace std;

int main() {

	double F, C;
	cout << "Enter the value in Fahrenheit degree: ";
	cin >> F;
	C = (5.0 / 9.0) * (F - 32.0); //use decimal point
	cout << "The value in Celsius is: " << C << endl;

	return 0;
}