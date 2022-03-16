#include <iostream>
using namespace std;
int main() {
	int j = 0;
	int rawscores[5] = {80,70,60,50,33};
	char grades[5] = {'A', 'B', 'C', 'D', 'E'};
	double rawscore;
	long idNum = 0;
	char grade;
	while (cin >> idNum >> rawscore) {
		for (int j = 4; j >= 0; j--)
		{
			if (rawscore > rawscores[j]) { 
				break; 
			}
		}
		grade = grades[j];
		cout << idNum << " " << grade << endl;

	}

	return 0;
}