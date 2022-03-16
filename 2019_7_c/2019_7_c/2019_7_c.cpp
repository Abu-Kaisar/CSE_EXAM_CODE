#include <iostream>
using namespace std;


class Rectangle {
private:
	double length, width;

public:
	void setData(double x, double y) {
		length = x;
		width = y;
	}
	double parameter() {
		return 2.0 * (length + width);
	}
	double area() {
		return length * width;
	}
	void showData() {
		cout << "The Length of the rectangle is: " << length << endl;
		cout << "The Width of the rectangle is: " << width << endl;
		cout << "The Parameter of the rectangle is: " << parameter() << endl;
		cout << "The Area of the rectangle is: " << area() << endl;

	}

};
int main() {

	Rectangle ss;
	double a, b;
	cout << "Input the Length: ";
	cin >> a;
	cout << "Input the Width: ";
	cin >> b;
	ss.setData(a, b);
	ss.showData();
	return 0;

}