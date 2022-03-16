#include <iostream>
#include <cmath>
using namespace std;
int main() {

	double Rin, Rout, Vin, Vout;
	cout << "Inner Radius: ";
	cin >> Rin;
	cout << "Outer Radius: ";
	cin >> Rout;
	cout << "Inner Velocity: ";
	cin >> Vin;

	Vout = Vin * pow((Rin / Rout), 2);
	cout << "Outer Velocity: "<<Vout<< " ft/sec" << endl;

	return 0;
}