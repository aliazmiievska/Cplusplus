#include <iostream>
#include <cmath>
using namespace std;
#include "constants.h"

double ballHeight(double time, double towerHeight);

int main()
{
	cout << "Enter the initial height of the tower in meters: " << endl;
	double towerHeight;
	cin >> towerHeight;

	double time = sqrt((2*towerHeight) / myConstans::g);

	//for (int i = 1; i <= time; i++) {
	//	if (ballHeight(i, towerHeight) < 0) {
	//		cout << "At " << i << " seconds, the ball is on the ground" << endl;
	//	}
	//	else {
	//		cout << "At " << i << " seconds, the ball is at height: " << ballHeight(i, towerHeight) << " meters" << endl;
	//	}
	//}

	for (int i = 1; i <= time; i++) {
		cout << "At " << i << " seconds, the ball is at height: " << ballHeight(i, towerHeight) << " meters" << endl;
	}

	cout << "At " << static_cast<int>(time) + 1 << " seconds, the ball is on the ground" << endl; // +1 to make (for example) 4.2324 -> 5 (4 is in loop)

	system("pause");
	return 0;
}

double ballHeight(double time, double towerHeight) {
	// z (height) = h (starting height) + v0(0 in our case)*t - g*t^2/2 =>
	// z = h - g*t^2/2 

	double height = towerHeight - (myConstans::g * (pow(time, 2) / 2));

	return height;
}