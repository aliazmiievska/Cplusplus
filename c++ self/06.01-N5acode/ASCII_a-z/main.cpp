#include <iostream>
using namespace std;

int main()
{
	cout << "ASCII\n";

	char letter = 'a';
	int letterNumber = static_cast <int>('a');
	int iii = 0;

	while (letter <= 'z') {
		iii++;
		cout << letter << "=" << letterNumber << '\t';
		if (iii % 7 == 0) cout << '\n';
		letter++; letterNumber++;
	}

	cout << endl;
	system("pause");
	return 0;
}