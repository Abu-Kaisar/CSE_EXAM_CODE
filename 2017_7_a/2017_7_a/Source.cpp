#include<iostream>
using namespace std;
int main() {

	int num, temp = 0, revr = 0, i = 0;
	cin >> num;
	while (num != 0) {
		temp = num % 10;
		revr = revr*10 + temp;
		num /= 10;
	}
	cout << revr;

	return 0;

}