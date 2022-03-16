#include<iostream>
using namespace std;
struct Cricketers
{
	char name[20];
	char team[10];
	double strike_rate;
};

int main() {

	struct Cricketers cck[10];
	for (int i = 0; i < 10; i++) {
		cout << "Name of the Player: ";
		cin >> cck[i].name;
		cout << "Name of the Team: ";
		cin >> cck[i].team;
		cout << "Strike-rate: ";
		cin >> cck[i].strike_rate;
	}
	
	for (int i = 0; i < 10; i++) {
		cout << "Player name: " << cck[i].name << "\tPlayer's Team: " << cck[i].team << "\tStrike-rate: " << cck[i].strike_rate << endl;
	}

	return 0;
}