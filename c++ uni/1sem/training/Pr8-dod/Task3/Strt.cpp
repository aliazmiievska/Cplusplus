
#include <iostream>
#include "windows.h"
using namespace std;

int main()
{
	int newArray[5];

	int array[5][5] = {
		{8, 9, 2, 1, 4},
		{5, 2, 6, 1, 3},
		{2, 3, 1, 7, 3},
		{9, 0, 1, 4, 7},
		{0, 1, 6, 2, 7}
	};
	int rowSum = 0;

	for (int col = 0; col < 5; col++)
	{
			rowSum += array[5][col];
			cout << rowSum << "\n";
	}


	cout << endl;

	system("pause");
	return 0;
}