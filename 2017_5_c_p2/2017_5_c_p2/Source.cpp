#include <iostream>
using namespace std;

int main() {

	int i;
	for (i = 0; i < 10; i++) {
		if (i % 3 == 0) {
			break; //there will be no output 
				   //cz the first number 0/3 == 0 satisfy the condition so break
		}
		cout << i << endl;
	}

	return 0;
}