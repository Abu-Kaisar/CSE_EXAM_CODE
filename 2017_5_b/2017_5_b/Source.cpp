#include <iostream>

using namespace std;
struct  student{
	int id;
	char name[20];
	float percentage;
};

int main() {

	student std;
	std.id = 1;
	strcpy_s(std.name, "Puja");
	std.percentage = 86.5;
	cout << "ID: " << std.id << endl;
	cout << "Name: " << std.name << endl;
	cout << "Percentage: " << std.percentage << endl;

	return 0;

}
