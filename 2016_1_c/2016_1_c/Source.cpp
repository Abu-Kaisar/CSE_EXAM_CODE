#include<iostream>
#include<string>
using namespace std;
int main() {

	char vowels[10] = { 'a','A','e','E','i','I','o','O','u','U' };
	string input;
	cin >> input;
	for (int i = 0; i <= input.length(); i++) {
		for (int j = 0; j < 10; j++) {
			if (input[i] == vowels[j]) {
				cout << input[i] << " is a Vowel" << endl;
			}
		}
	}

	return 0;
}