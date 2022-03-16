#include <iostream>
using namespace std;

int fun(int a, int &b);

int main() {

	int a = 1;
	int b = 2;
	int c = 3;
	c = fun(a, b); 
					 /* here c becomes 42 bcz the function returns 42
				     as the function takes address of b and its call by reference 
			         so it swap the value of b with new value 42 */
	cout << c << " " << b << " " << a << endl;

	return 0;
}
int fun(int a, int &b) {
	a = 42;
	b = 42; //call by reference and swap b=2 with b=42
	return 42;
}
