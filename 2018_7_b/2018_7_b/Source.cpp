#include <iostream>
#include <iomanip>
using namespace std;
int main() {

	double r1, r2, r3, req = 0.0;
	r1 = 1000.0;
	r2 = 500.0;
	r3 = 250.0;
	req = 1 / ((1 / r1) + (1 / r2) + (1 / r3));
	cout ;

	cout << "The Combined Resistance " << setw(7) << setprecision(5) << setfill('0') << req << "ohms." << endl;


	return 0;
}