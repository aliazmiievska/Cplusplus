#include <iostream>
using namespace std;
#include "constants.h"

double ballHeight(double time, double towerHeight);

int main()
{
	cout << "Enter the initial height of the tower in meters: " << endl;
	double towerHeight;
	cin >> towerHeight;

	int maxTime = 5; //seconds

	for (int i = 0; i <= 5; i++) {
		if (ballHeight(i, towerHeight) < 0) {
			cout << "At " << i << " seconds, the ball is on the ground" << endl;
		}
		else {
			cout << "At " << i << " seconds, the ball is at height: " << ballHeight(i, towerHeight) << " meters" << endl;
		}
	}

	system("pause");
	return 0;
}

double ballHeight(double time, double towerHeight) {
	// z (height) = h (starting height) + v0(0 in our case)*t - g*t^2/2 =>
	// z = h - g*t^2/2 

	double height = towerHeight - (myConstans::g * (pow(time, 2) / 2));

	return height;
}