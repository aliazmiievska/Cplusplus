#include <iostream>
using namespace std;

int main()
{
	cout << "First player: ";
	string firstPlayer;
	cin >> firstPlayer;

	cout << "Second player: ";
	string secondPlayer;
	cin >> secondPlayer;

	cout << endl << firstPlayer << "\t" << secondPlayer << endl;
	cout << "-----------\n";

	int firstPoints = 0;
	int secondPoints = 0;
	int kkk = 0;

	while (firstPoints <= 1000 || secondPoints <= 1000) {
		kkk++;
		int firstPlus, secondPlus;
		cin >> firstPlus >> secondPlus;
		firstPoints += firstPlus;
		secondPoints += secondPlus;
		cout << firstPoints << "\t" << secondPoints << endl;
		if (kkk % 2 == 0) cout << "-----------\n";
	}

	cout << endl;
	system("pause");
	return 0;
}